#include<stdio.h>
#include<stdlib.h>

//Structure diclaration
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
	//Static memory allocatio
    NODE obj;

    //Dynamic memory allocation
    PNODE ptr=(PNODE)malloc(sizeof(NODE));

    obj.data=11;    //Direct accessing operator(.)
    obj.next=NULL;

    ptr->data=11;     //Indirect accessing operator(->)
    ptr->next=NULL;
	
	return 0;
}