#include "shell.h"

/**
 * _prompt - Displays a prompt "Ashton$ " to the standard output.
 */
void _prompt(void)
{
	size_t mn, length;

	if (isatty(STDIN_FILENO))
	{
		char pr[] = "Ashton$ ";

		length = _strlen(pr);

		for (mn = 0; mn < length; mn++)
		{
			p_man(pr[mn]);
		}
	}
}

