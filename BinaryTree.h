#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct node{
	int data;
	struct node *right;
	struct node *left;
}node_t;

void Insert(node_t **leaf, int data);

void Remove(node_t **leaf, int data);

node_t *DFSearch(node_t *leaf, int data);

void PreOrderPrint(node_t *leaf);

void PostOrderPrint(node_t *leaf);

void InOrderPrint(node_t *leaf);

#endif
