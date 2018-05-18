#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void main(int argc,char**argv)
{
	int buff[256];
	int fd1=open(argv[1],0);

	int fd2=open(argv[2],O_CREAT|O_WRONLY,0777);
	//int d=dup2(fd2,1);


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
