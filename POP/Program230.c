#include<stdio.h>

//* * * *

void DisplayI()
{
	auto int iCnt=0;
	
    while(iCnt<4)
	{
		printf("*\t");
	    iCnt++;
	}
	printf("\n");
}

void DisplayR()
{
	int iCnt=0;
	
    if(iCnt<4)
	{
		printf("*\t");
	    iCnt++;
		DisplayR();       //Recursive call
	}	
}

int main()
{
	DisplayI();
	
	DisplayR();
	
	return 0;
}