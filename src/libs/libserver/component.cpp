
#include "component.h"

void IComponent::SetPool(IDynamicObjectPool *pPool) {

}

void IComponent::SetParent(IEntity *pObj) {

}

void IComponent::SetEntitySystem(EntitySystem *pSys) {

}

EntitySystem *IComponent::GetGlobalEntitySystem() {
    return nullptr;
}

EntitySystem *IComponent::GetEntitySystem() {
    return nullptr;
}

void IComponent::ComponentBackToPool() {

}

