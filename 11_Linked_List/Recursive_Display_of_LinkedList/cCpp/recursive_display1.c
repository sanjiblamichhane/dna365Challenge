// recursive call and print on recursiveDisplay()

#include <stdio.h>
#include <stdlib.h> //for malloc 

struct Node{
	int data;
	struct Node *next; //pointer name
}*first = NULL;


//function to create a linked list
void create(int A[], int n){
	int i;
	struct Node *t, *last;

	//first node
	first = (struct Node *)malloc(sizeof(struct Node));
	first -> data = A[0];
	first -> next = NULL;
	last = first;

	// form a linked list
	for (i=1; i<n; i++){
		t = (struct Node*)malloc(sizeof(struct Node));
		t -> data = A[i];
		t -> next = NULL;
		last -> next = t;
		last = t;
	}
}

// display function
void Display(struct Node *p){
	while(p != NULL){
		printf("%d ", p-> data);
		p = p -> next;
	}
}

// Recursive Display
void recursiveDisplay(struct Node *p){
	if(p != NULL){
		//printf("%d ", p -> data);
		recursiveDisplay(p -> next);
		printf("%d ", p -> data);
		printf("\n");
	}
}

//main
int main(){
	int A[] = {3,5,7,10,15};
	create(A, 5);
	recursiveDisplay(first); // displays all elements in the LL

	return 0;
}
