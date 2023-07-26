#include "main.h"

/**
 * execute_builtin - execute a built-in command
 * @command: the command to execute
 *
 * this function executes a built-in command
 */
/*void execute_builtin(char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		exit(0);
	}
	else if (strcmp(command, "cd") == 0)
	{
		if (chdir(args[1]!= 0)
				{
				write(STDERR_FILENO, "cd no file or directory\n", 30);
				}
			}
			else
			{
			write(STDERR_FILENO, "unknown built i n command: ", 26);
			write(STDERR_FILENO,command, strlen(command));
			write(STDERR_FILENO, "\n", 1);
			}
			}*/

/*	
 * _executecmd - executes a command passed to the function using /bin/sh
 * @command: command passes to this function
 */
void _executecmd(char *command)
{
	pid_t pid;
	int status;
	char *envp[] = {NULL};
	char *args[4];
	char *builtins[] = {"exit", NULL}; /* list of bult in commands*/

	/*if (_strcmp(command, "exit") == 0)
		_quitShell();*/

	/*chek if command is a built-in command*/
	for (int i = 0; builtins[i] != NULL; i++)
	{
		if (_strcmp(command, builtins[i]) == 0)
		{
			execute_builtin(command);/*execute built-in command*/
			return;
		}
	}

	if (access(command, X_OK) !=0)
	{
		perror("command not found");
		return;
	}

	pid = fork();

	if (pid == -1)
	{
		perror("fork");
		return;
	}
	else if (pid == 0)
	{
		args[0] = "/bin/sh";
		args[1] = "-c";
		args[2] = command;
		args[3] = NULL;

		execve(args[0], args, envp);
		perror("execve");
		exit(1);
	}
	else
		waitpid(pid, &status, 0);
}
