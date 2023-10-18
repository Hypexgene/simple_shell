#include "shell.h"

/**
 * spl - Compares two strings alphabetically
 * @sm: The first string to be compared.
 * @mt: The second string to be compared.
 *
 * Return: 0 if strings are same, or contrast of the first varing characters.
 *
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

