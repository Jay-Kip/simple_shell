#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "main.h"

#define BUFFER_SIZE 1024
#define PROMPT "$ "

/**
 * readCommand - Reads a command from stdin
 * @buffer: Buffer to store the command
 * @size: Size of the buffer
 * Return: Number of bytes read
 */
ssize_t readCommand(char *buffer, size_t size)
{
	ssize_t bytesRead;

	bytesRead = read(STDIN_FILENO, buffer, size);
	if (bytesRead > 0 && buffer[bytesRead - 1] == '\n')
		buffer[bytesRead - 1] = '\0';
	return (bytesRead);
}

/**
 * main - Main entry point
 * Return: Always 0
 */
int main(void)
{
	char input[BUFFER_SIZE];
	ssize_t inputSize;
	int _isInteractive = isatty(STDIN_FILENO);

	while (1)
	{
		if (_isInteractive)
			write(STDOUT_FILENO, PROMPT, sizeof(PROMPT) - 1);

		inputSize = readCommand(input, sizeof(input));
		if (inputSize <= 0)
			break;

		if (_strcmp(input, "exit") == 0 || _strcmp(input, "quit") == 0)
			break;
		if (_strcmp(input, "clear") == 0)
		{
			_clear();
			continue;
		}
		if (_strcmp(input, "env") == 0)
		{
			_myEnviron(environ);
			continue;
		}


		_executecmd(input);
	}

	return (0);
}
