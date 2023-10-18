#include "shell.h"

/**
 * spl - Compares two strings lexicographically.
 * @sm: The first string to compare.
 * @mt: The second string to compare.
 *
 * Return: 0 if strings are identical, otherwise the difference of the first
 *         differing characters.
 */
int spl(const char *sm, const char *mt)
{
	int y = 0;

	while (sm[y] == mt[y])
	{
	if (sm[y] == '\0')
	return (0);

	y++;
	}

	return (sm[y] - mt[y]);
}

