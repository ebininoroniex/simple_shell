#include "shell.h"

/**
* print_env - prints the environment string to stdout
*
* Return: 0
*/
void print_env(void)
{
	int y = 0;
	char **env = environ;

	while (env[y])
	{
		write(STDOUT_FILENO, (const void *)env[y], _strlen(env[y]));
		write(STDOUT_FILENO, "\n", 1);
		y++;
	}
}
