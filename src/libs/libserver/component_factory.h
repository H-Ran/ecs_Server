#pragma once
#include <string>
#include <functional>
#include <map>
#include <iostream>
#include <memory>
#include <mutex>
#include "component.h"

template <typename... Targs>
class ComponentFactory
{
public:
	typedef std::function<IComponent* (Targs...)> FactoryFunction;

	static std::shared_ptr<ComponentFactory<Targs...>> GetInstance();

	bool Regist(const std::string& className, FactoryFunction pFunc);

	bool IsRegisted(const std::string& className);

	IComponent* Create(const std::string className, Targs... args);

private:
	static std::shared_ptr<ComponentFactory<Targs...>> _pInstance = nullptr;

	std::map<std::string, FactoryFunction> _map;

	std::mutex _lock;
};

template <typename... Targs>
std::shared_ptr<ComponentFactory<Targs...>> ComponentFactory<Targs...>::GetInstance()
{
	if (_pInstance == nullptr)
	{
		_pInstance = std::make_shared<ComponentFactory<Targs...>>();
	}
	return _pInstance;
}

template <typename... Targs>
bool ComponentFactory<Targs...>::Regist(const std::string& className, FactoryFunction pFunc)
{
	std::lock_guard<std::mutex> guard(_lock);
	if (_map.find(className) != _map.end())
		return false;

	_map.insert(std::make_pair(className, pFunc));
	return true;
}

template <typename... Targs>
bool ComponentFactory<Targs...>::Regist(const std::string& className, FactoryFunction pFunc)
{
	std::lock_guard<std::mutex> guard(_lock);
	if (_map.find(className) != _map.end())
		return false;

	_map.insert(std::make_pair(className, pFunc));
	return true;
}

template <typename... Targs>
bool ComponentFactory<Targs...>::IsRegisted(const std::string& className)
{
	std::lock_guard<std::mutex> guard(_lock);
	return _map.find(className) != _map.end();
}

template <typename... Targs>
IComponent* ComponentFactory<Targs...>::Create(const std::string className, Targs... args)
{
	_lock.lock();
	auto iter = _map.find(className);
	if (iter == _map.end())
	{
		std::cout << "ComponentFactory Create failed. can't find component. className:" << className.c_str() << std::endl;
		return nullptr;
	}
	auto fun = iter->second;
	_lock.unlock();

	return fun(std::forward<Targs>(args)...);
}