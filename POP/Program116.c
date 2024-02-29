#include<stdio.h>
#include<stdlib.h>

//Structure diclaration
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

int main()
{
	//Static memory allocatio
    NODE obj;

    //Dynamic memory allocation
    NODE *ptr=(NODE*)malloc(sizeof(NODE));

    obj.data=11;    //Direct accessing operator(.)
    obj.next=NULL;

    ptr->data=11;     //Indirect accessing operator(->)
    ptr->next=NULL;
	
	return 0;
}