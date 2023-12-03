#pragma once
#include "common.h"
#include "global.h"

class SnObject {
public:
    virtual ~SnObject() = default;

    SnObject() {
        _sn = Global::GetInstance()->GenerateSN();
    }

    explicit SnObject(uint64 sn) {
        _sn = sn;
    }

    uint64 GetSN() const {
        return _sn;
    }

    void ResetSN()
    {
        _sn = Global::GetInstance()->GenerateSN();
    }

protected:
    uint64 _sn;
};