#include "shell.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	char *dossier;

	while (1)
	{
		_prompt();
		dossier = userinput();

		if (spl(dossier, "exit") == 0)
		{
		free(dossier);
		exit(0);
		}

		exec(dossier);
		free(dossier);
	}

	return (0);
}

