//Accept string from user and toggle case of string
#include<iostream>
using namespace std;

void strtoggle(char str[])    
{
    while(*str!='\0')
	{
        if((*str>='A')&&(*str<='Z'))
        { 
            *str=*str+32;
		}
		else if((*str>='a')&&(*str<='z'))
        { 
            *str=*str-32;
		}
		str++;
	}
}

int main()
{
    char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strtoggle(Arr);    //Display(100);
	cout<<"String in toggle case:"<<Arr<<endl;
	
	return 0;
}
