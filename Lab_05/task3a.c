#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int main(){
    int f = fork();
   if (f == -1){
         printf("ERROR IN FORK!");
       exit(1);
    }
   if (f == 0){
        printf("My child PID is: %ld\n", (long)getpid());
	printf("My child PPID is: %ld\n", (long)getppid());
    }
 else{
wait(NULL);
       printf("My PID is: %ld\n", (long)getpid());
	printf("My PPID is: %ld\n", (long)getppid());
    }
      
return 0;
}