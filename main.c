#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

int main(){
	// create a new tree node
	node_t *root = NULL;// (node_t *) malloc(sizeof(*root));

	// add some random number in
	Insert(&root, 40);
	Insert(&root, 10);
	Insert(&root, 59);
	Insert(&root, 30);

	// print 
	printf("\nPre-Order Print\n");
	PreOrderPrint(root);

	printf("\nIn-Order Print\n");
	InOrderPrint(root);

	printf("\nPost-Order Print\n");
	PostOrderPrint(root);

	printf("\n");

	return 0;
}
