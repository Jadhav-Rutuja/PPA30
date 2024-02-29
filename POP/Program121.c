#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node*PNODE;
typedef struct node**PPNODE;

void InsertFirst(PPNODE head,int no)
{
    //Allocate memory for node (dynamically)
	//Initialize that node
	
	//Check whether LL is empty or not
	//If LL is empty then new node is the first node so update its address in first pointer through head
	
	//If LL is not empty then store the address of first node in the next pointer of our new node
	//Update the first pointer through head
	PNODE newn =NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=no;
    newn->next=NULL;	
	
	if(*head == NULL)   //LL is empty
	{
		*head = newn;
	}
	else     //LL contains atleast one node
	{
		newn->next = *head;
		*head = newn;
	}
}

void InsertLast(PPNODE head,int no)
{
    //Allocate memory for node (dynamically)
	//Initialize that node
	
	//Check whether LL is empty or not
	//If LL is empty then new node is the first node so update its address in first pointer through head
	
	//If LL is not empty then 
	//Travel till last node of LL
	//Store address of new node in the next pointer of last node
	
	PNODE newn =NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));   
    
    newn->data=no;
    newn->next=NULL;	
	
	if(*head == NULL)   //LL is empty
	{
		*head = newn;
	}
	else     //LL contains atleast one node
	{
		//Travel till last node
		//Store address of new node in the next pointer of last node
	    temp=*head;
		
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

void Display(PNODE head)
{
    printf("Elements from linked list are:\n");

    while(head != NULL)
	{
        printf("| %d |->",head->data);
		head = head->next;
	}		
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt=0;
	
    while(head != NULL)
	{
        iCnt++;
		head = head->next;
	}		
    return iCnt;
}

int main()
{
	int iRet=0;
    PNODE first=NULL;
      
	InsertFirst(&first,101);    //Call by address
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);

	Display(first);      //Call by value
	
	iRet=Count(first);
	printf("Number of nodes are:%d\n\n",iRet);
	
	InsertFirst(&first,1);

    Display(first);      //Call by value
	
	iRet=Count(first);
	printf("Number of nodes are:%d\n",iRet);
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	
	Display(first);
	
	iRet=Count(first);
	printf("Number of nodes are:%d\n\n",iRet);
	
	return 0;
}