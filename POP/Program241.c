#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[100];
	int fd=0;          //File Descriptor
	int iRet=0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;    //Failure
	}
	
	printf("File is successfully opened with FD %d\n",fd);

	iRet=read(fd,Data,10);
	
	printf("%d bytes gets successfully read in the file\n",iRet);
	
	printf("Data from file is\n");
	write(1,Data,iRet);
	
	return 0;
}