#include "shell.h"

/**
 * _strlen - Calculates the string's length.
 * @l: The string calculating the length.
 *
 * Return: The string's length.
 */
size_t _strlen(const char *l)
{
	size_t size = 0;

	while (l[size] != '\0')
	{
		size++;
	}

	return (size);
}

