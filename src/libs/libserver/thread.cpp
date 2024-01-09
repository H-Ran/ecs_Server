#include "thread.h"
Thread::Thread() {
  _state = ThreadState_Init;
}
void Thread::Start() {
  _thread = std::thread([this]() {
	  InitComponent();
	  _state = ThreadState_Run;
	  while (!Global::GetInstance()->IsStop) {
		Update();
		std::this_thread::sleep_for(std::chrono::milliseconds(1);
	  }
	  const auto threadId = _thread.get_id();
	  std::cout << "close thread [1/2]. thread sn:" << this->GetSN() << " thread id:" << theadId << std::endl;
	  _state = ThreadState_Stopped;
  });
}
bool Thread::IsRun() const {
  return _state == ThreadState_Run;
}
bool Thread::IsStop() const {
  return _state == ThreadState_Stopped;
}
bool Thread::IsDispose() {
  if (_thread.joinable())
  {
	const auto theadId = _thread.get_id();
	_thread.join();
	std::cout << "close thread [2/2]. thread sn:" << this->GetSN() << " thread id:" << theadId << std::endl;
	return true;
  }

  return false;
}
