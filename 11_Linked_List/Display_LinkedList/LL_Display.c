#include <stdio.h>
#include <stdlib.h> // for malloc function

struct Node{
	int data;
	struct Node *next;
}*first = NULL;

//
void Create(int A[], int n){
	int i;
	struct Node *t; //temp node
	struct Node *last; // last node

	// first node
	first = (struct Node *)malloc(sizeof(struct Node));
	first -> data = A[0];
	first -> next = NULL;
	last = first;

	//
	for(i = 1; i< n; i++){
		t = (struct Node*)malloc(sizeof(struct Node));
		t -> data = A[i];
		t -> next = NULL;
		last -> next =t;
		last = t;
	}
}

// Display function
void Display(struct Node *p){
	while (p != NULL){
		printf("%d ",p -> data);
		p = p -> next;
	}
	printf("\n");
}

int main(){
	int A[] = {3,5,7,10,15};

	// call the function to create
	Create(A, 5);

	// display
	Display(first);

	return 0;
}

