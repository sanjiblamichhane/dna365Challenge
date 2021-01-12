#include <iostream>
using namespace std;


class Pair
{
	public:
		int first,second;
		void check()
		{
			first = 5;
			cout<<" Congratulations! The check() method of the Pair class \n
				has execuded. But this isn't enough to guarantee \n
				that your code is correct" <<endl;
		}
}
