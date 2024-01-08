#pragma once
#include "sn_object.h"
#include "common.h"
#include "object_pool_interface.h"

class IEntity;
class EntitySystem;
class IDynamicObjectPool;

class IComponent : virtual public SnObject
{
public:
    ///@brief 依赖实体管理系统
    friend class EntitySystem;

    ///@brief 自定义析构函数
    virtual ~IComponent() = default;

    ///@brief 设置动态对象池依赖,对象从对象池中取出
    void SetPool(IDynamicObjectPool *pPool);

    ///@brief 设置父实体
    void SetParent(IEntity *pObj);

    ///@brief 设置EntitySystem实体系统
    void SetEntitySystem(EntitySystem *pSys);

    ///@brief 返回组件是否活动
    bool IsActive() const { return _active; }

    ///@brief 返回父Entity实例
    template <class T>
    T *GetParent();

    /// @brief 获取当前ThreadMgr的全局实例
    /// @return 所在ThreadMgr的全局实例
    static EntitySystem *GetGlobalEntitySystem();

    /// @brief 获取当前所在的EntitySystem
    /// @return 当前所在的EntitySystem
    EntitySystem *GetEntitySystem() const;

    virtual void BackToPool() = 0;
    virtual void ComponentBackToPool();

protected:
    bool _active{true};

private:
    IEntity *_parent{nullptr};
    EntitySystem *_pEntitySystem{nullptr};
    IDynamicObjectPool *_pPool{nullptr};
};

template <class T>
T *IComponent::GetParent()
{
    return dynamic_cast<T *>(_parent);
}

template <class T>
class Component : public IComponent
{
public:
    virtual const char *GetTypeName();
    uint64 GetTypeHashCode();
};

template <class T>
const char *Component<T>::GetTypeName()
{
    return typeid(T).name();
}

template <class T>
uint64 Component<T>::GetTypeHashCode()
{
    return typeid(T).hash_code();
}
