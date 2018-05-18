#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
void main()
{
	int buff[256];
	int f=dup(1,2);
	close(1);
	int f1=open("f2.txt",O_WRONLY|O_RDONLY|O_CREAT,0777);
	close(0);
	int f0=open("f1.txt",O_RDONLY);
	if(f0<0)
	{
		perror("EROR");
	}
	
	for(;;)
	{
		int n=read(f0,buff,255);
		if(n<=0)
		break;
		write(f1,buff,n);
	}
} 