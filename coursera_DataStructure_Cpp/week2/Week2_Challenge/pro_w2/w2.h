#include <iostream>
#include <fstream>
using namespace std;

ofstream o_f("output.txt", ios::out); // declare a pointer to an output file
class Pair{
	public: // public interfaces for this class
		int first,second;

		// method
		void check()
		{
			first = 5;
			o_f<<" Congratulations! The check() method of the Pair class\n";
			o_f<<"has execuded. But this isn't enough to guarantee \n";
		        o_f<<"that your code is correct"<<endl;
		}

		
	protected:
		//
		//

	private:
		//
		//
};

Pair *pairFactory(){
	return new Pair; // return  a pointer to the created object.
}
