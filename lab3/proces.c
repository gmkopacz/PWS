#include <stdio.h>
//#include <process.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>


int main(int argc, char* argv[]){
	int pid,status,i,j;
	for(i=0;i<argc-2;i++)
	{
		if((pid = fork()) == 0){
			printf("potomny = %d \n", i+1);
				for(j=i; j<atoi(argv[i+2]);j++)
				{
					printf("potomny = %d, krok %d \n", i+1,j+1);
					sleep(1);
				}
				exit(i);
		}
	}
	printf("Macierzysy = %d \n", getpid());
	for(i=0;i<argc-2;i++)
	{
		pid = wait(&status);
		printf("Proces %d zakonczony status: %d \n", pid,status/256);
	}
	
}
