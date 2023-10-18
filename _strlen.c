#include "shell.h"

/**
 * _strlen - Calculates the length of a string.
 * @l: The string to calculate the length of.
 *
 * Return: The length of the string.
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

