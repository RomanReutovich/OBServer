#include "KeyEventObserver.h"
#include <iostream>

     KeyEventObserver :: ~KeyEventObserver() {}
void KeyEventObserver :: notify(std::string text) {
    std :: transform(text.begin(), text.end(), text.begin(), toupper);
    std :: cout << text << std :: endl;
}
