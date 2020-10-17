#include <iostream>
using namespace std;

int n = 7;
int Array[10] = {1,2,6,3,4,5,6};

int Print(int x)
{
	int i;
	if(x == 1)
	{
		for(i=0; i<n; i++)
		{
			cout<<Array[i];
		}
		cout<<endl;
	return 1;
	}
	else {}
	
	return 0;
}
void Remove(int x)
{
	int i,found,found_pos;
	int temp;
	if( x >= 0 && x < 10)
	{
		found = 0;
		for(i=0; i<n && found == 0; i++)
		{
			if(Array[i] == x)
			{
				found = 1;
				found_pos = i;
			}
			else{}
		}
		if(found == 1)
		{
			for(i = found_pos; i<=n; i++)
			{
				temp = Array[i];
				Array[i] = Array[i + 1];
				Array[i+1] = temp;
				cout<<"The item "<<"is now at: "<<i<<endl;
			}
			n--;
			cout<<"New Array is: ";
			for(i=0; i<n; i++)
			{
				cout<<Array[i];
			}
			cout<<endl;
		}

	}

}