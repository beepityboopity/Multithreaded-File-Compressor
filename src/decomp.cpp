#include "decomp.hpp"
#include <iostream>
#include <thread>

void Decomp::run(){
    std::cout << "decomp thread ID: " << std::this_thread::get_id() << "\n";
}