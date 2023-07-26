#include "main.h"


void _exec(char *cmd)
{
	pid_t pid;
	char *args[1024];
	int i = 0;
	char *token = strtok(cmd, " \t\n");
	char *envp[] = { NULL };

	while (token != NULL && i < 1024 - 1)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, " \t\n");
	}

	pid = fork();
	if (pid == 0)
	{
		args[0] = "/bin/sh";
		args[1] = "-c";
		args[2] = cmd;

	

	
		execve(args[0], args, envp);
		perror("execve");
		exit(1);
	}
}
