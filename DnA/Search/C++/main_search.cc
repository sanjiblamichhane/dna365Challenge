#include <iostream>
#include "search.h"
using namespace std;

int main()
{
	find(8);
	find(3);
	//
	count(3);
	count(8);

	//input error
	find(10);
	return 0;
}
