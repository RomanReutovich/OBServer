#include "KeyEventNotifier.h"
#include <iostream>

    KeyEventNotifier::~KeyEventNotifier() {}

void KeyEventNotifier :: addObserver(IObserver &observer) {
    this->observer_.push_back(&observer);
    std :: cout << "Observer pushed. New size: " << this->observer_.size() << std :: endl;
}
void KeyEventNotifier::removeObserver(IObserver &observer) {
        // Find the observer in the container
        auto it = std::find(this->observer_.begin(), this->observer_.end(), &observer);
        // Check if the observer was found
        if (it != this->observer_.end()) {
            // Erase the observer from the container
            this->observer_.erase(it);
            std::cout << "Observer removed. New size: " << this->observer_.size() << std::endl;
        } else {
            std::cout << "Observer not found in the list." << std::endl;
        }
}
//void KeyEventNotifier :: removeObserver(IObserver &observer) {
//    this->observer_.erase(this->observer_.end());
//    std :: cout << "Erase:" << this->observer_.size() << std :: endl;
//}
void KeyEventNotifier :: notifyObservers(std::string text) {
    for (IObserver *observer : observer_) {
        observer->notify(text);
    }
}