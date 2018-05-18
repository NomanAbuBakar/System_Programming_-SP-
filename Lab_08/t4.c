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
		else if(S_ISDIR(buf.st_mode))
		{
			printf("%s is a Directry\n",argv[i]);
			printf("User ID : %d\n\n\n",buf.st_uid);
		}
		else if(S_ISREG(buf.st_mode))
		{
			//f=int(buf.st_ino);
			printf("%s is a File\n",argv[i]);
			printf("Inode Number is : %d\n",buf.st_ino);
			printf("Access time : %d\n",buf.st_atime);
			printf("Modified time : %d\n",buf.st_mtime);
			printf("size: %d\n\n\n",buf.st_size);
		}
	}
	
	
}
