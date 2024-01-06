#include "KeyEventNotifier.h"
#include <iostream>

    KeyEventNotifier::~KeyEventNotifier() {}

void KeyEventNotifier :: addObserver(IObserver &observer) {
    this->observer_.push_back(&observer);
    std :: cout << "Push:" << this->observer_.size() << std :: endl;
}
void KeyEventNotifier :: removeObserver(IObserver &observer) {
    this->observer_.erase(this->observer_.end());
    std :: cout << "Erase:" << this->observer_.size() << std :: endl;
}
void KeyEventNotifier :: notifyObservers(std::string text) {
    for (IObserver *observer : observer_) {
        observer->notify(text);
    }
}