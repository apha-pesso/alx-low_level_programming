#include <stdio.h>
#include <stdlib.h>

typedef struct node node
{
	int data;
	struct node *next;
};

node *head, first;

first = (node *)malloc(sizeof(node));


