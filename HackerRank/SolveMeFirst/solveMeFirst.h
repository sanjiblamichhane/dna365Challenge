#include <iostream>
#include <fstream> 
using namespace std;

// declare pointer towards output file
ofstream out_f("output.txt", ios::out); 
class SOLVE{
	public: 
		// public interface for SOLVE class

	// constructor
	
	int solveMeFirst(int, int); // a method
	// example usage: 
	// has two parameters: first value and second value
	// returns the sum
};

// default constructor


// begin method implementation
int 
solveMeFirst(int a, int b){

	int sum;
	int num1 = a;
	int num2 = b;

	sum = num1 + num2;
	return sum;
}
