#include<iostream>
using namespace std;

template <class T>
T Addition(T A,T B)
{
	T Ans;
	Ans = A+B;
	return Ans;
}

int main()
{	
	int iNo1=11,iNo2=21;
	int iret=0;
	iret = Addition(iNo1,iNo2);	
	cout<<"Addition is:"<<iret<<endl;
	
	float fNo1=11.4,fNo2=21.5;
    float fret=0;
	fret = Addition(fNo1,fNo2);	
	cout<<"Addition is:"<<fret<<endl;
	
	return 0;
}