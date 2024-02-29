#include<iostream>
using namespace std;

class Number
{
	public:
    int Factorial(int No)
    {
	   int iFact=1;
	   int iCnt=0;
	
     	for(iCnt=1; iCnt<=No; iCnt++)
	    {
		    iFact*=iCnt;//iFact=iFact*iCnt;
	    }
	   return iFact;
    }
};

int main()
{
	Number nobj;
	
	int iValue=0;
	int iRet=0;
	
	cout<<"Enter the value:";
	cin>>iValue;
	
	iRet=nobj.Factorial(iValue);
	
	cout<<"Factorial is:"<<iRet<<endl;
	
	return 0;
}