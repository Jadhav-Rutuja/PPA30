// Input : Row  4   Columns  4
/*

   a  b  c  d
   a  b  c  d 
   a  b  c  d 
   a  b  c  d 
   
*/

//Input: Row  4   Columns  4
/*
 
 
*  
*  *   
*  *  *    
*  *  *  *  
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch = '\0';
	
	for(i=1; i<=iRow; i++)
	{
		for(j=1,ch='a'; j<=iCol; j++,ch++)
		{
			printf("%c\t",ch);
		}
		printf("\n\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number Rows:\n");
	scanf("%d",&iValue1);
	
    printf("Enter the number Columns:\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}