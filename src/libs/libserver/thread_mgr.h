#pragma once

#include "singleton.h"
#include "entity_system.h"
class ThreadMgr: public Singleton<ThreadMgr>,public EntitySystem{

};
