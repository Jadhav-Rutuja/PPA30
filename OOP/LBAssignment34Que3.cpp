/*3.Write generic program to accept N values from user and return addition of that values.*/

#include<iostream>

using namespace std;

template <class T>
T AddN(T arr[],int iSize)
{
	T sum=arr[0]; 
	int i=0;
	
	for(i=1; i<iSize; i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}

int main()
{
	int brr[]={10,20,30,40,50};
	float crr[]={10.0,3.7,9.8,8.7};

	int iSum=AddN(brr,5);
	printf("%d\n",iSum);

	float fSum=AddN(crr,4);
	printf("%.2f\n",fSum);

    return 0;
}
