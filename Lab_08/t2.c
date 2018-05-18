#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void main()
{
	int buff[256];
	int n;
	int fd1=open("f.txt",O_RDONLY,0777);
	int fd2=open("errorAndOuyput.txt",O_RDONLY|O_WRONLY|O_CREAT,0777);
	close(2);
	int fd3=dup(fd2);
	if(fd1==-1)
	{
		perror("Error");
		return;
	}

	int d=dup(fd1);

	for(;;)
	{
		n=read(d,buff,255);
		if(n<=0)
		{
			break;
		}
		write(fd2,buff,n);
	}
	
	
}
