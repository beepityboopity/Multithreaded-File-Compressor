#include "comp.hpp"
#include <iostream>
#include <thread>

void Comp::run(){
    std::cout << "comp thread ID: " << std::this_thread::get_id() << "\n";
}