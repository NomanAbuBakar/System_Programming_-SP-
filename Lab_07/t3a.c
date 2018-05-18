#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void main()
{
	int buff[256];
	int fd1=open("newFile.txt",1);
	//int d=dup2(fd1,1);
	for(;;)
	{
		int n=read(0,buff,255);
		if(n<=0)
		{
			break;
		}
		write(fd1,buff,n);
	}
	
}
