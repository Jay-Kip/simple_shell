#include "main.h"

/**
 * _strlen - function to check length of a string
 * @str: string to be checked
 * Return: size of the string
 */

int _strlen(char *str)
{
	size_t i;

	while (*str)
	{
		str++;
		i++;
	}

	return (i);
}
