#include <iostream>
#include "w2.h"
using namespace std;

int main()
{
	Pair *p = pairFactory();
	
	// This function call should work without crashing:
	p -> check();

	// Deallocating the heap memory. ( Assuming it was made on the heap)
	delete p;

	o_f << "If you can see this text, the system has not crashed it yet." << endl;
	return 0;
}
