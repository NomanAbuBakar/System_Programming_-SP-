#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void main()
{
	int buff[256];
	int fd1=open("/etc/passwd",O_RDONLY);
	int d=dup(fd1);


	for(;;)
	{
		int n=read(d,buff,255);
		if(n<=0)
		{
			break;
		}
		write(1,buff,n);
	}
	
	
}
