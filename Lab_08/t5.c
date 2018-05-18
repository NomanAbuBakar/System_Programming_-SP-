#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
void main(int argc,char**argv)
{
	struct stat buf;
	char * ptr;
	int i;
	int f;
	for(i=1;i<argc;i++)
	{
		if(stat(argv[i],&buf)==-1)
		{
			printf("%s\n",argv[i]);
			perror("Error");
			//continue;
		}	
		else if(S_ISREG(buf.st_mode))
		{
			if(access(argv[i],R_OK)==0)
			{	
				printf("Have Read Permission\n");
			}
			else
			{
				printf("Dont Have Read Permission\n");
			}
			if(access(argv[i],W_OK)==0)
			{	
				printf("Have Write Permission\n");
			}
			else
			{
				printf("Dont Have Write Permission\n");
			}
			if(access(argv[i],X_OK)==0)
			{	
				printf("Have Execute Permission\n");
			}
			else
			{
				printf("Dont Have Execute Permission\n");
			}
		}
	}
	
	
}
