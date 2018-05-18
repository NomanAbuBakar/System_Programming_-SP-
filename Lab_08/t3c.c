#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
void main()
{
	int buff[256];
	close(0);
	int f0 = open("f1.txt",O_RDONLY);
	if(f0<=-1)
	{
		perror("EROOR");
	}
	int f2=dup2(1,2);
	int f1 = open("f2.txt",O_RDONLY|O_WRONLY|O_CREAT,0777);
	
	for(;;)
	{
		int n=read("f0.txt",buff,255);
		if(n<=0)
		break;
		write(f1,buff,n);
	}
	
}