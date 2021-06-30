#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*first=NULL, *second=NULL, *third=NULL;



// Linked Lists
// insert
void SortedInsert(struct Node **H, int x){
	struct Node *t, *q=NULL, *p=*H;

	t = (struct Node*)malloc(sizeof(struct Node));
	t-> data = x;
	t-> next = NULL;

	if (*H == NULL){
		*H = t;
	}
	else{
		while(p && p-> data < x){
			q = p;
			p = p -> next;
		}
		if(p == first){
			t -> next = first;
			first = t;
		}
		else {
			t -> next = q -> next;
			q -> next = t;
		}
	}
}

// searching for a key element
struct Node *Search(struct Node *p, int key){
	while(p != NULL){
		if(key==p -> data){
			return p;
		}
		p = p -> next;
	}
	return NULL;
}
