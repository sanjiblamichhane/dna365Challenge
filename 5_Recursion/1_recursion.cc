// example 1 : call and print
#include <iostream>
using namespace std;

void fun1(int n);

int main(){
	// call the function here.
	int x = 3;

	fun1(x); 
	return 0;
}

//
void fun1(int x){

	if( x > 0){
		cout<<" x is: "<< x <<endl;
		fun1(x -1);
	}
}
