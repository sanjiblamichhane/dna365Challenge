#include <stdio.h>
#include <stdlib.h> // for malloc function

struct Node{
	int data;
	struct Node *next; //pointer name -- next
}*first = NULL;

// create a funtion to create a node
// takes array as parameter
void Create(int A[], int n){
	int i; // to scan through array
	struct Node *t; //temp node
	struct Node *last; // last node

	// first node
	first = (struct Node *)malloc(sizeof(struct Node)); // malloc allocates memory in heap
	first -> data = A[0]; // assign A[0] as first data
	first -> next = NULL; // next element is NULL bc there's nth
	last = first;

	// form a linked list
	for(i = 1; i< n; i++){ // strated with 1 bc i=0 is already created
		t = (struct Node*)malloc(sizeof(struct Node));
		t -> data = A[i];
		t -> next = NULL;
		last -> next = t;
		last = t;
	}
}

// function to display a node
void Display(struct Node *p){
	while (p != NULL){
		printf("%d ", p -> data);
		p = p -> next; // move p to next node
	}
	printf("\n");
}

int main(){
	int A[] = {3,5,7,10,15};

	// call the function to create
	Create(A, 5);// A is already declared as Array

	// display
	Display(first);

	return 0;
}

