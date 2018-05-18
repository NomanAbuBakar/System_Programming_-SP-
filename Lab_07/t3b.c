#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void main()
{
	int buff[256];
	int fd1=open("f1.txt",0);
	int fd2=open("f2.txt",1);
	//int d=dup2(fd1,1);
	for(;;)
	{
		int n=read(fd1,buff,255);
		if(n<=0)
		{
			break;
		}
		write(fd2,buff,n);
	}
	
}
