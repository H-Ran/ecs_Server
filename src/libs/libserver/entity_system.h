#pragma once

#include <iostream>

#include "entity.h"
#include "system.h"
#include "global.h"
#include "cache_swap.h"
#include "component_factory.h"

class Packet;

class IEntity;

class IUpdateSystem;

class IMessageSystem;

class EntitySystem : virtual public SnObject, public IDisposable {
public:
    virtual ~EntitySystem();

    friend class IEntity;

    /// @brief 初始化所有组件
    void InitComponent();

    /// @brief 从对象池分配一个 T 组件,并加入到EntitySystem;将对应的IUpdateSystem和IMessageSystem加入对应列表
    /// @tparam T 组件类
    /// @tparam ...TArgs 组件的构建参数类型
    /// @param ...args 组件的构建参数
    /// @return 返回创建的组件
    template<class T, typename... TArgs>
    T *AddComponent(TArgs... args);

    /// @brief 从组件工厂的已注册组件中创建一个组件,不经过对象池
    /// @tparam ...TArgs 组件的构建参数类型
    /// @param className 组件类名
    /// @param ...args 组件的构建参数
    /// @return 返回创建的组件
    template<typename... TArgs>
    IComponent *AddComponentByName(std::string className, TArgs... args);

    template<class T>
    T *GetComponent();

    virtual void Update();

    void UpdateMessage();

    void Dispose() override;

    void AddPacketToList(Packet *pPacket);

protected:
    void AddToSystem(IComponent *pObj);

private:
    std::list<IUpdateSystem *> _updateSystems;
    std::list<IMessageSystem *> _messageSystems;
    std::map<uint64, IComponent *> _objSystems; // 所有组件对象
    std::mutex _packet_lock; // 本线程所有的待处理包
    CacheSwap<Packet> _cachePackets;
};

template<class T, typename... TArgs>
T *EntitySystem::AddComponent(TArgs... args) {
    auto pComponent = DynamicObjectPool<T>::GetInstance()->MallocObject(std::forward<TArgs>(args)...);
    AddToSystem(pComponent);
    return pComponent;
}

template<typename... TArgs>
inline IComponent *EntitySystem::AddComponentByName(std::string className, TArgs... args) {
    auto pComponent = ComponentFactory<TArgs ...>::GetInstance()->Create(className, std::forward<TArgs>(args)...);
    if (pComponent == nullptr) {
        return nullptr;
    }
    AddToSystem(pComponent);
    return pComponent;
}

template<class T>
T *EntitySystem::GetComponent() {
    auto iter = std::find_if(_objSystems.begin(), _objSystems.end(), [](auto pair) {
        if (dynamic_cast<T *>(pair.second) != nullptr)
            return true;

        return false;
    });
    if (iter == _objSystems.end())
        return nullptr;
    return dynamic_cast<T *>(iter->second);
}