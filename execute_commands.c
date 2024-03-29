#include "main.h"
/**
 * _stripSpace - function to strip space
 * @str: string
 * Return: Nothing
 */

void _stripSpace(char *str)
{

	char *start, *end, *dest, *src;
	int len;

	if (str == NULL)
		return;

	len = _strlen(str);
	if (len == 0)
		return;

	start = str;
	end = str + len - 1;
	dest = str;
	src = start;

	/*Remove leading white space*/
	while (*start == ' ' || *start == '\t')
		start++;

	/*Remove trailing white space*/
	while (end > start && (*end == ' ' || *end == '\t'))
		end--;

	/*Null terminate*/
	*(end + 1) = '\0';

	/*shift remaining to start*/

	for (src = start; src <= end; src++, dest++)
		*dest = *src;
	*dest = '\0';
}
/**
 * _executecmd - executes a command passed to the function using /bin/sh
 * @command: command passes to this function
 */
void _executecmd(char *command)
{
	pid_t pid;
	int status;
	char *envp[] = {NULL};
	char *args[4];

	_stripSpace(command);

	if (_strcmp(command, "exit") == 0)
		_quitShell();

	/**
	 * if (access(command, X_OK) != 0)
	 * {
	 *	perror("command not found");
	 *	return;
	* }
	*/

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
