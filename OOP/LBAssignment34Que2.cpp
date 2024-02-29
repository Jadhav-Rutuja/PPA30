/*2.Write generic program to find largest number from three numbers.*/

#include<iostream>

using namespace std;

template<class T>
T Max(T iNo1,T iNo2,T iNo3)
{
	if(iNo1>=iNo2 && iNo1>=iNo3)
	{
		cout<<iNo1<<endl;
	}
	if(iNo2>=iNo1 && iNo2>=iNo3)
	{
		cout<<iNo2<<endl;
	}
	if(iNo3>=iNo1 && iNo3>=iNo2)
	{
		cout<<iNo3<<endl;
	}
}

int main()
{
	int iRet=Max(10,30,20);
	
	float fRet=Max(10.2,50.2,100.6);
	
	return 0;
}