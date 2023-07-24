#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * exitShell - Exits the shell
 */
void exitShell(void)
{
	const char msg[] = "Exiting the shell...\n";

	write(STDOUT_FILENO, msg, sizeof(msg) - 1);
}
