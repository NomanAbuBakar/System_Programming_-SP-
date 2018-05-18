#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int mysystem(char * cmd){

        int status;
	 pid_t cpid;
	cpid=fork();
	switch(cpid){
	case -1:
	perror("fork failed");
	return -1;
	case 0:
	execl("/bin/bash/","mybash","-c",cmd,'\0');
	_exit(127);
	default:
	waitpid(cpid, &status ,0);
	return status;
}
}
int main(){
      printf("Running  command using mysystem\n");
      mysystem("id");
      printf("\nDone bye.\n");
      exit(0);
}