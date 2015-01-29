#ifndef __FUNC_
#define __FUNC_

struct Func
{
	int& i;
 
	Func(int& i_):i(i_) {}

	void doSomething(int &i) 
	{
		/* This does nothing */
	} 

	void operator()() 
	{ 
		for (int j=0; j < 1000000; ++j ) 
		{ 
			doSomething(j); 
		}
	}
};

#endif
