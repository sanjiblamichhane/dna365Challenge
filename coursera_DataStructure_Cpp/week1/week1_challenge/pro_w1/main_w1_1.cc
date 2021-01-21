#include "w1.h"
#include <iostream>
using namespace std;

int main()
{
//	int x, y;
	Pair p(100, 200);
//	p.a = 100;
//	p.b = 200;

	if( p.a + p.b == p.sum()){
		cout<<" Success! "<< endl;
	}
	else{
		cout<<" p.sum() returns "<< p.sum() << " instead of "<< (p.a + p.b) <<endl;
	}
	return 0;
}
