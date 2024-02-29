#include<stdio.h>

int Addition(int ino1,int ino2)
{
    int Ans=0;
Ans=ino1+ino2;
return Ans;
}

int main()
{
    int ivalue1=0,ivalue2=0;
    int iRet=0;

    printf("enter number of ivalue :\n");
    scanf("%d",&ivalue1);

printf("Enter the number of ivalue2:");
scanf("%d",&ivalue2);

iRet=Addition(ivalue1,ivalue2);

printf("Addition is:%d",iRet);

    return 0;
}