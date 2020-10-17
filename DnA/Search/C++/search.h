#include <iostream>
#include <fstream>
using namespace std;

ofstream o_f("output.txt", ios::out);

int n = 20;
int A[20] = {9,8,4,1,2,4,3,3,3,3,5,4};


void find(int x)
{
	int i, found, found_pos;
	if(x >= 0 && x <10) //check the boundary condition
	{
		found = 0; //i have not found yet
		for(i=0; i<n && found == 0; i++)
		{
			if(A[i] == x)
			{
				found = 1;
				found_pos = i;
			}
		}
		if(found == 1)
		{
			o_f<<"Found :  "<<x<<" at position :"<<found_pos<<endl;
		}

	}
	else
	{
		o_f<<"Since "<<x<<" is not on the list, Input Error"<<endl;
	}
}

void count(int x)
{
	//counts how many numbers are present

	int i, found;
	if (x>= 0 && x<10)//check the boundary condition
	{	
		found = 0;
		for(i=0; i<12; i++) // i do not have found here --> keep looping even if the number is found
		{
			if(A[i] == x)
			{
				found = found + 1;
			}
		}
		o_f<<" Found count for "<<x<<" is: "<<found<<endl;
	}
}