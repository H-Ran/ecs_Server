
#include "component.h"

class ThreadMgr;

void IComponent::SetPool(IDynamicObjectPool *pPool) {
 _pPool=pPool;
}

void IComponent::SetParent(IEntity *pObj) {
    _parent=pObj;
}

void IComponent::SetEntitySystem(EntitySystem *pSys) {
    _pEntitySystem=pSys;
}

EntitySystem *IComponent::GetGlobalEntitySystem() {
    return dynamic_cast<EntitySystem>(ThreadMgr::GetInstance());
}

EntitySystem *IComponent::GetEntitySystem() const{
    return _pEntitySystem;
}

void IComponent::ComponentBackToPool() {
    _sn=0;
    _parent= nullptr;
    _pEntitySystem= nullptr;
    _active=true;

    BackToPool();
    if (_pPool != nullptr)
        _pPool->FreeObject(this);
}

