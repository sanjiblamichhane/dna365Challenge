#include <stdio.h>
#include "chain.h"

// key
int hash(int key){
	return key%10;
};

// insert in a hash table
void Insert(struct Node *H[], int key){
	int index = hash(key);
	SortedInsert(&H[index], key);
};
//main
int main(){
	struct Node *HT[10];
	struct Node *temp;

	int i;

	// hash table
	for(i=0; i<10; i++){
		HT[i] = NULL;
	}
	//
	Insert(HT, 12);
	Insert(HT, 22);
	Insert(HT, 42);


	//search
	int key = 10;
	temp = Search(HT[hash(key)], key);

	// print
	printf("%d", temp -> data);


	return 0;
}
