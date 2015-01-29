#include <thread>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <utility>

using namespace std;

const int ARRSIZE = 100000;

typedef array<int,ARRSIZE> HugeArray;

void processHugeArray(unique_ptr<HugeArray> hA)
{
	cout << "Inside huge array " << endl;
	auto i = (*hA).size();

	for ( auto iter = (*hA).begin(); iter != (*hA).end() ; ++iter )
	{
		(*iter) = i+1;
	}
	cout << "ProcessHugeArray : Element[2] = " << (*hA)[2] << endl;
}

int main()
{
	unique_ptr<HugeArray> arr(new HugeArray);
	auto i = (*arr).size();
	for ( auto iter = (*arr).begin(); iter != (*arr).end() ; ++iter )
	{
		(*iter) = i;
	}

	cout << "Main : Element[2] = " << (*arr)[2] << endl;

	// thread t(processHugeArray,arr);
	processHugeArray(std::move(arr));

	return 0;
}
