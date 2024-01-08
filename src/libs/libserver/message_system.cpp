#include "message_system.h"
IMessageSystem::~IMessageSystem() {

}
void IMessageSystem::AttachCallBackHandler(MessageCallBackFunctionInfo *pCallback) {

}
bool IMessageSystem::IsFollowMsgId(Packet *packet) const {
  return false;
}
void IMessageSystem::ProcessPacket(Packet *packet) const {

}
void IMessageSystem::DispatchPacket(Packet *pPacket) {

}
void IMessageSystem::SendPacket(Packet *pPacket) {

}
