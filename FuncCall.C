#include <iostream>
#include <thread>

using namespace std;

class Task
{

	public:
		void operator()() const 
		{ 
			cout << "Hello, Concurrent " << endl;
		}
};

int main()
{ 
	Task task;
	thread t(task); 
	t.join();

	return 0;
}
