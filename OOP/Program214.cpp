#include<iostream>
using namespace std;

int Maximum(int Arr[],int size)
{
	int i=0;
	int Max=Arr[0];
	
	for(i=0; i<size; i++)
	{
		if(Arr[i]>Max)
		{
            Max=Arr[i];
		}
	}
	return Max;
}

int main()
{	
	int Brr[]={10,20,30,40,50};
	int ret=0;
	ret=Maximum(Brr,5);
	cout<<"Maximum is:"<<ret<<endl;
	
	return 0;
}