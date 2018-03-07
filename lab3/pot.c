#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


void main(int argc, char* argv[])
{
	int id,i;
	for(i=1;i<= atoi(argv[2]); i++)
	{
		printf("Potomny %d krok %d \n", atoi(argv[1]),i);
		sleep(1);
	}
	exit(i);
}
