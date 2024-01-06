// Observer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "INotifier.h"
#include "KeyEventNotifier.h"
#include "KeyEventObserver.h"

int main()
{
    std::string abc = "ABCDEF";
    std::cout<< abc << "\n" ;

    INotifier *a = new KeyEventNotifier;

    IObserver *b = new KeyEventObserver;
    IObserver *c = new KeyEventObserver;
    IObserver *d = new KeyEventObserver;
    a->addObserver(*b);
    a->addObserver(*c);
    a->addObserver(*d);

    a->notifyObservers(abc);
    a->removeObserver(*c);
    a->notifyObservers(abc);
    a->notifyObservers("A");

}

