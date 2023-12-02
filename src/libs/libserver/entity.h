#pragma once

#include <map>
#include <list>
#include <memory>
#include <algorithm>
#include <queue>

#include "component.h"
#include "object_pool.h"

class IEntity : public IComponent
{
public:
	virtual ~IEntity();
	void BackToPool() override;

	template <class T, typename... TArgs>
	void AddComponent(TArgs... args);

	template <class T>
	T* GetComponent();

private:
	void AddToSystem(IComponent* pObj);

protected:
	std::map<uint64, IComponent*> _components;
};

template <class T>
T* IEntity::GetComponent()
{
	auto iter = std::find_if(_components.begin(), _components.end(), [](auto pair)
		{
			if (dynamic_cast<T*>(pair.second) != nullptr)
				return true;
			return false; })


}