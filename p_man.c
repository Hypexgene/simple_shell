#include "shell.h"

/**
 * p_man - Writes a character to standard output.
 * @pm: The character to be written.
 *
 * Return: Returns number of bytes written on success and -1 on error.
 */
int p_man(char pm)
{
	return (write(STDOUT_FILENO, &pm, 1));
}

