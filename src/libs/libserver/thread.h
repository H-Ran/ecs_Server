#pragma once

#include <thread>
#include "entity_system.h"

enum ThreadState {
	ThreadState_Init,
	ThreadState_Run,
	ThreadState_Stopped,
};

class Thread : public EntitySystem {
 public:
	Thread();
	void Start();

	bool IsRun() const;
	bool IsStop() const;
	bool IsDispose();
 private:
	ThreadState _state;
	std::thread _thread;
};
