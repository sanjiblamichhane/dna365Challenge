#include <iostream>
using namespace std;

int i;
//function prototype
int linearSearch(int array[], int size, int searchValue)
{
	for(i =0; i<size; i++)
	{
		if(searchValue == array[i])
		{
			return i;
		}
	}
	return -1; //did not find the search value
}

int main()
{
	int a[] = {15, 23, 7, 45, 87, 16};
	int userValue;

	cout<<"Enter an integer: "<<endl;
	cin>> userValue;

	int result = linearSearch(a, 6, userValue);

	//test the return value
	if(result >= 0)
	{
		cout<<"The number "<<a[result] <<" was found at the element with index "<<result<<endl;
	}
	else
	{
		cout<<"The number "<<userValue<<" was not found."<<endl;

	}
	return 0;
}