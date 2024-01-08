#pragma once

#include <mutex>
#include <map>
#include <list>
#include <functional>

#include "common.h"
#include "packet.h"

/***
 * 消息队列的回调接口
 */
class MessageCallBackFunctionInfo {
 public:
	virtual ~MessageCallBackFunctionInfo() = default;
	virtual bool IsFollowMsgId(Packet *packet) = 0;
	virtual void ProcessPacket(Packet *packet) = 0;
};

/***
 * 普通消息队列的回调实现类
 */
class MessageCallBackFunction : public MessageCallBackFunctionInfo {
 public:
	using HandleFunction = std::function<void(Packet *)>;//Packet处理函数

	void RegisterFunction(int msgId, HandleFunction function);
	bool IsFollowMsgId(Packet *packet) override;
	void ProcessPacket(Packet *packet) override;

	std::map<int, HandleFunction> &GetCallBackHandler() { return _callbackHandle; }

 protected:
	std::map<int, HandleFunction> _callbackHandle;
};

/***
 * 过滤的消息队列回调实现类
 * @tparam T 消息
 */
template<class T>
class MessageCallBackFunctionFilterObj : public MessageCallBackFunction {
 public:
	using HandleFunctionWithObj = std::function<void(T *, Packet *)>;//以对象过滤的Packet处理函数
	using HandleGetObject = std::function<T *(SOCKET)>;//判断SOCKET是否匹配,返回

	void RegisterFunctionWithObj(int msgId, HandleFunctionWithObj function);
	bool IsFollowMsgId(Packet *packet) override;
	void ProcessPacket(Packet *packet) override;

	HandleGetObject GetPacketObject{nullptr};

 private:
	std::map<int, HandleFunctionWithObj> _callbackHandleWithObj;
};

template<class T>
bool MessageCallBackFunctionFilterObj<T>::IsFollowMsgId(Packet *packet) {
  if(MessageCallBackFunction::IsFollowMsgId(packet))
	return true;
  if (_callbackHandleWithObj.find(packet->GetMsgId()) != _callbackHandleWithObj.end())
  {
	if (GetPacketObject != nullptr)
	{
	  T* pObj = GetPacketObject(packet->GetSocket());
	  if (pObj != nullptr)
		return true;
	}
  }
}
template<class T>
void MessageCallBackFunctionFilterObj<T>::ProcessPacket(Packet *packet) {
  const auto handleIter = _callbackHandle.find(packet->GetMsgId());
  if (handleIter != _callbackHandle.end())
  {
	handleIter->second(packet);
	return;
  }

  auto iter = _callbackHandleWithObj.find(packet->GetMsgId());
  if (iter != _callbackHandleWithObj.end())
  {
	if (GetPacketObject != nullptr)
	{
	  T* pObj = GetPacketObject(packet->GetSocket());
	  if (pObj != nullptr)
	  {
		iter->second(pObj, packet);
	  }
	}
  }
}
template<class T>
void MessageCallBackFunctionFilterObj<T>::RegisterFunctionWithObj(int msgId,
																  MessageCallBackFunctionFilterObj::HandleFunctionWithObj function) {
_callbackHandleWithObj[msgId]=function;
}

