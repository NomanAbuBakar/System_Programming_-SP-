#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int main(){
    int f = fork();
    int status;
   if (f == -1){
         printf("ERROR IN FORK!");
       exit(1);
    }]
   if (f == 0){
        exit(-1);
        printf("My child PID is: %ld\n", (long)getpid());
	printf("My child PPID is: %ld\n", (long)getppid());
    }c
 else{
        wait(&status);
      if (WIFEXITED(status)){
        printf("Normal Termination,exit status =%d\n",WEXITSTATUS(status));     
      }
       printf("My PID is: %ld\n", (long)getpid());
	printf("My PPID is: %ld\n", (long)getppid());
    }
      
return 0;
}