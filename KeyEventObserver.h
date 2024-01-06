#pragma once
#include <string>
#include "IObserver.h"

class KeyEventObserver :
        public IObserver
{
public:
    virtual ~KeyEventObserver() override;
    virtual void notify(std::string text) override;
};

