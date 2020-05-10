#include <iostream>
using namespace std;

int n, i;
// function prototype
int isPrimeNumber(int);

int main()
{
	bool isPrime; //switch to determine Yes or No

	for(n =2; n<100; n++) //n starts at 2 b/c 1 is neither prime nor composite
	{
		isPrime = isPrimeNumber(n);
		//
		if(isPrime == true)
		{
			cout<<n<<" "<<endl;
		}

	};
	return 0;
};
	//function implementation
	int isPrimeNumber(int n)
	{
		bool isPrime = true;
		for(i = 2; i < n/2; i++)
		{
			if(n%i == 0)
			{
				isPrime = false;
				break;
			}
		}
		return isPrime;
	}
