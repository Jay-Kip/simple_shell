#include "main.h"


void _exec(char *cmd)
{
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
	args[i] = NULL;

	
	execve(args[0], args, envp);

	perror(args[0]);
}
