#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h> 
void main(void){ 
	int pid,status,i; 
	if((pid = fork()) == 0) { /* Proces potomny ---*/ 
		for(i=0;i<10;i++) { 
         printf(" Potomny krok: %d\n",i); 
   		 sleep(1); 
		} 
      	exit(0); 
  	}   
 /* Proces macierzysty */ 
 	printf("Macierzysty = %d \n",getpid());   
 	pid = wait(&status); 
 	printf("Proces %d zakończony status: %d\n",pid,status); 
} 
