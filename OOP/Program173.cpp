#include<iostream>
using namespace std;

int strlenX(char str[])
{	
    int iCnt=0;
	
	while(*str!='\0')
	{
		str++;
		iCnt++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	iRet=strlenX(Arr);    //Display(100);
	cout<<"String length is:"<<iRet<<endl;
	
	return 0;
}
