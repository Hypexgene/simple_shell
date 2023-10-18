#include "shell.h"

/**
 * userinput - Reads a line of input from the standard input.
 *
 * Return: A pointer to the input string.
 */
char *userinput()
{
	char *in = NULL;
	size_t br = 0, len;

	if (getline(&in, &br, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(in);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("getline");
			free(in);
			exit(EXIT_FAILURE);
		}
	}

	len = _strlen(in);
	if (len > 0 && in[len - 1] == '\n')
	{
		in[len - 1] = '\0';
	}

	return (in);
}

