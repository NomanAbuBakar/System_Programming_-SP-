#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
void main()
{
	int buff[256];
	close(1);
	int fd1=open("f1.txt",O_RDONLY|O_CREAT,0777);
	int d=dup2(fd1,2);
	for(;;)
	{
		int n=read(0,buff,255);
		if(n<=0)
		break;
		write(d,buff,n);
	}
	
}