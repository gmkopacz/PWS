#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(int argc, char* argv[])
{
	int pid,status,i,j;
	char str[1];
	for(i=1;i<argc;++i)
	{
		if((pid = fork()) == 0)
		{
			sprintf(str, "%d", i);
			execl("./pot","pot", str, argv[i+2], NULL);
		}
	}
	for(j=1; j<= atoi(argv[1]); ++j)
	{
		printf("Macierzysty = %d krok %d \n", i+1, j+1);
		sleep(1);
		
	}
	for (i=0; i< argc - 1; ++i)
	{
		pid = wait(&status);
		printf("Proces %d zakończony status: %d\n",pid,status/256);
	}
}
