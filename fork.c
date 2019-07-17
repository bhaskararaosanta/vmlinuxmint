#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>

int main()
{
	int pid;
	pid = fork();
	if(pid == 0)
	{
		printf("I am in child process with pid:%d\n", getpid());
		printf("I am in child process with its parent pid:%d\n", getppid());
		sleep(5);
	}
	else
	{
		printf("I am in parent process with pid:%d\n", getpid());
		printf("I am in parent process with its parent pid:%d\n", getppid());
	}

	return 0;
}
