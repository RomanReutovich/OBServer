#pragma once
#include <string>

class IObserver
{
public:
	virtual ~IObserver() {};
	virtual void notify(std::string text) = 0;
};



