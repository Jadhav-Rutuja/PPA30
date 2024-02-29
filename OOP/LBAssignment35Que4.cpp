/*Write generic program to accept N values and search last
occurence of any specific value.*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr,int iSize,T iNo)
{
	int iCnt=0;
	
	for(iCnt=iSize; iCnt>=0;iCnt--)
	{
		if(iNo==arr[iCnt])
	    {
            return iCnt;
        }
    }
		
}

int main()
{
	int brr[]={10,20,30,10,30,40,10,40,10};
	
    int iRet=SearchFirst(brr,9,40);
	
	cout<<"First occurance:"<<iRet<<endl;
	
	return 0;
}

