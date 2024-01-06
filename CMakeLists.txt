cmake_minimum_required(VERSION 3.24)
project(OBServer)

set(CMAKE_CXX_STANDARD 17)

add_executable(OBServer INotifier.cpp IObserver.cpp KeyEventNotifier.cpp KeyEventObserver.cpp Observer.cpp)
