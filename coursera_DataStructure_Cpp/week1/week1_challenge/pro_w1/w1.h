#include <iostream>
using namespace std;


class Pair{
	public:
		 // public variables
	 	 int a, b;

		 // constructor
		 Pair(int, int);

		 // member function
		 int sum(){
			 return a + b;
		 }

	private:
	protected:
	
};

//constructor implementation
Pair::Pair(int x, int y){
	//
	a = x;
	b = y;
}

