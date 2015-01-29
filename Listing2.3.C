#include <thread>
#include <iostream>
#include "Func.H"
#include "ThreadGuard.H"

int main()
{

	int i = 0;
	Func func(i);

	std::thread t(func);
	
	ThreadGuard tGuard(t);

	std::cout << "Thread Guard Example " << std::endl;

	return 0;
}
	
	



