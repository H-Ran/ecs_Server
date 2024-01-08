#pragma once

class ISystem
{
protected:
    ISystem() = default;

public:
    virtual ~ISystem() = default;
};
/***
 * 初始化系统
 */
class IInitializeSystem : virtual public ISystem
{
protected:
    IInitializeSystem() = default;

public:
    virtual ~IInitializeSystem() = default;

    virtual void Initialize() = 0;
};
/***
 * 更新系统组件
 */
class IUpdateSystem : virtual public ISystem
{
protected:
    IUpdateSystem() = default;

public:
    virtual ~IUpdateSystem() = default;

    virtual void Update() = 0;
};
