#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

// this function inserts unique data into the b-tree
void Insert(node_t **leaf, int data){
	// check if the leaf is null
	if(*leaf == NULL){
		// create a new leaf
		node_t *nNode = malloc(sizeof(node_t));
		nNode->left = NULL;
		nNode->right = NULL;
		nNode->data = data;
		
		*leaf = nNode; // (node_t *) malloc(sizeof(*leaf)); // cast it to maintain portablity for c++
		// save the data
		//*leaf->data = data;
		// init the left and right to null
		//*leaf->left = NULL;
		//*leaf->right = NULL;
	}
	// check if the data is less than this leaf->data
	else if((*leaf)->data < data){
		// add the data to the right side
		Insert(&(*leaf)->right, data);
	}
	// check if the data is greater than this leaf->data
	else if((*leaf)->data > data){
		// add the data to the left side
		Insert(&(*leaf)->left, data);
	}
	// if we wanted to add duplicate data we can add an else
	// here to catch and Insert them to either the right or the left
	// or we can add >= or <= in the above else if conditions to 
	// do this as well.
}

void PreOrderPrint(node_t *leaf){
	// pre-order print:
	// 1. check if current node is null
	if(leaf){
		// 2. print data
		printf("%d,", leaf->data);
	}
	else{
		// reached the end return
		return;
	}
	// 3. go to left node
	PreOrderPrint(leaf->left);
	// 4. go to right node
	PreOrderPrint(leaf->right);
}

void InOrderPrint(node_t *leaf){
	// 1. check if the leaf is null
	if(!leaf){
		// end of branch reached return
		return;
	}
	// 2. go to the left
	InOrderPrint(leaf->left);
	// 3. print data
	printf("%d,", leaf->data);
	// 4. go to the right
	InOrderPrint(leaf->right);
}

void PostOrderPrint(node_t *leaf){
	// post-order print:
	// 1. check if current node is null
	if(!leaf){
		// end of branch reached return
		return;
	}

	// 2. go to the left node
	PostOrderPrint(leaf->left);
	// 3. go to the right node
	PostOrderPrint(leaf->right);

	// 4. print the node
	printf("%d,", leaf->data);
}
