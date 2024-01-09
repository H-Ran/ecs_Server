#include "entity_system.h"
#include "message_system.h"

EntitySystem::~EntitySystem() {

}

//void EntitySystem::InitComponent() {
//    AddComponent<>();
//}

void EntitySystem::Update() {
	UpdateMessage();
	auto iter = _updateSystems.begin();
	while (iter != _updateSystems.end()) {
		auto pComponent = dynamic_cast<IComponent *>(*iter);
		if (!pComponent->IsActive()) {
			_objSystems.erase(pComponent->GetSN());
			iter = _updateSystems.erase(iter);
			pComponent->ComponentBackToPool();
		} else {
			(*iter)->Update();
			++iter;
		}
	}
}

void EntitySystem::UpdateMessage() {
	_packet_lock.lock();
	if (_cachePackets.CanSwap()) {
		_cachePackets.Swap();
	}
	_packet_lock.unlock();

	auto pMsgList = _cachePackets.GetReaderCache();
	for (auto itMsg = pMsgList->begin(); itMsg != pMsgList->end(); ++itMsg) {
		auto pPacket = (*itMsg);
		for (auto iter : _messageSystems) {
			auto pMessageObj = iter;
			if (pMessageObj->IsFollowMsgId(pPacket))
				pMessageObj->ProcessPacket(pPacket);
		}
	}
	pMsgList->clear();
}

void EntitySystem::Dispose() {
	for (auto &iter : _updateSystems) {
		auto pComponent = dynamic_cast<IComponent *>(iter);
		pComponent->BackToPool();
	}

	_updateSystems.clear();
}

void EntitySystem::AddPacketToList(Packet *pPacket) {
	std::lock_guard<std::mutex> guard(_packet_lock);
	_cachePackets.GetWriterCache()->emplace_back(pPacket);
}

void EntitySystem::AddToSystem(IComponent *pComponent) {
	pComponent->SetEntitySystem(this);
	_objSystems[pComponent->GetSN()] = pComponent;

	const auto objUpdate = dynamic_cast<IUpdateSystem *>(pComponent);
	if (objUpdate != nullptr)
		_updateSystems.emplace_back(objUpdate);

	const auto objMsg = dynamic_cast<IMessageSystem *>(pComponent);
	if (objMsg != nullptr) {
		objMsg->RegisterMsgFunction();
		_messageSystems.emplace_back(objMsg);
	}
}
