#include <iostream>

void Search(
	const int a[],
	size_t first,
	size_t size,
	int target,
	bool& found,
	size_t& location
	){
	/* Precondition:
	* Postcondition:
	*/
	size_t middle;

	if (size_t==0)
	{
		found=false;
	}
	else{
		middle = first + size/2;
		if(target == a[middle]){

			location = middle;
			found = true;

		}
		else if(target < a[middle]){
			search(a, first, size/2, target, found, location);
		}
		else{
			search(a, middle + 1, (size-1)/2, target, found , location);

		}
	}
}
