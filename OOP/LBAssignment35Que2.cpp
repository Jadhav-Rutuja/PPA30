/*Write generic program to accept N values and count frequency 
of any specific value.*/

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr, int iSize, T iNo)
{
   int iCnt=0;
   int iFrequency=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
	   if(arr[iCnt]==iNo)
	   {
	       iFrequency++;
	   }
   }
   return iFrequency;

	
	
}

int main()
{
	int brr[]={10,20,30,10,30,40,10,40,10};
	
	int iRet=Frequency(brr,9,10);
	
	cout<<iRet<<endl;
	return 0;
}