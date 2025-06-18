#include <iostream>
#include "comp.hpp"
#include "decomp.hpp"

int main(){
	std::cout << "hello multithreaded compressor!\n";
	Comp c;
	c.run();
	Decomp d;
	d.run();
	char ans;
	std::cout << "Exit program? y/n: ";
	std::cin >> ans;
	if (ans == 'y') return 0;

	return 0;
}