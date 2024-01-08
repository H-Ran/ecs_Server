#include "message_list.h"
#include "iostream"
void MessageCallBackFunction::RegisterFunction(int msgId, MessageCallBackFunction::HandleFunction function) {
  _callbackHandle[msgId] = function;
}
bool MessageCallBackFunction::IsFollowMsgId(Packet *packet) {

  return _callbackHandle.find(packet->GetMsgId()) != _callbackHandle.end();
}
void MessageCallBackFunction::ProcessPacket(Packet *packet) {
  const auto handleIter = _callbackHandle.find(packet->GetMsgId());
  if (handleIter == _callbackHandle.end())
  {
	std::cout << "packet is not hander. msg id;" << packet->GetMsgId() << std::endl;
  }
  else
  {
	handleIter->second(packet);
  }
}
