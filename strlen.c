#include "main.h"

/**
 * _strlen - function to check length of a string
 * @str: string to be checked
 * Return: size of the string
 */

int _strlen(char *str)
{
	size_t i = 0;

	while (*str)
	{
		str++;
		i++;
	}

	return (i);
}
