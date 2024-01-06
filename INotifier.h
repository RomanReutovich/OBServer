#pragma once
#include <vector>
#include "IObserver.h"

//class IObserver;

class INotifier
{
public:
	virtual ~INotifier() {};
	virtual void addObserver(IObserver& observer) = 0;
	virtual void removeObserver(IObserver& observer) = 0;
	virtual void notifyObservers(std::string text) = 0;
private:
    //std::vector<IObserver*> observer_;
};


