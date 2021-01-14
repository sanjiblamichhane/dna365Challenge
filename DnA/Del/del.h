//filename: del.h
// Author: Sanjib Lamichhane
#include <fstream>
#include <iostream>
using namespace std;
		
ofstream o_f("output.txt", std::ios);

class P0_DELETE
{
	public:
		P0_DELETE(int); //constructor

		int P0_DEL_INT(int); // a method
			// example usage:B.P0_DEL_INT(x);
			// deletes an integer from a list.
			// if x == 1 --> deletes the item from the list --> returns 1
			// if x == -1 --> undo the deleted item from the list --> returns -1;
	private:
	//
	
	protected:
	// data variables
	int n = 10; // n can be 10 max.
}
//constructor implementation
P0_DELETE::P0_DELETE(int x)
{
	// your code goes below
	
}

int 
P0_DELETE::P0_DEL_INT(int x)
{
	// your code goes below
	

	return 0; // make sure to modify this.
}
