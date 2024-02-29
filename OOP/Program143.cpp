#include<iostream>
using namespace std;

class ArrayX
{
	private:
	   int *Arr;
	   int iSize;
	   
	public: 
	   ArrayX(int iValue)    //Parametrised constructor
	   {
		   this->iSize=iValue;
		   Arr=new int[iSize];   //Resource 
	   }
	   
	   ~ArrayX()           //Destructor
	   {
		   delete []Arr;   //Deallocate the resource
	   }
	   
	   void Accept()
	   {
		   int iCnt=0;
		   cout<<"Enter the elements:"<<endl;   
		   for(iCnt=0; iCnt<iSize; iCnt++)
	       {
	           cin>>Arr[iCnt];
	       }
	   }
	   
	   void Display()
	   {
		   int iCnt=0;
		   
		   cout<<"Elements of array are"<<endl; 
		   for(iCnt=0; iCnt<iSize; iCnt++)
	       {
	           cout<<Arr[iCnt]<<endl;
	       }
	   }
	   
	   int Summation()
       {
		  int iCnt=0,iSum=0;
	
		  for(iCnt=0; iCnt<iSize; iCnt++)
		  {
			  iSum=iSum+Arr[iCnt];
		  }
		 return iSum;
       }
};

int main()
{
	int iRet=0;
	
	ArrayX obj1(5);
	
    obj1.Accept();
    obj1.Display();
    
    iRet=obj1.Summation();

    cout<<"Addition is:"<<iRet<<endl;	

	return 0;
}