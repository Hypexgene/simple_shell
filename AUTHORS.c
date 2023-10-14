#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success, 1 on failure
 */
int main (void)
{

	FILE *file;

	file = fopen("authors.txt", "w");

	if (file == NULL)
	{
		fprintf(stderr, "Not able to open the writing file.\n");
		return (1);
	}

	fprintf(file, "Author: Hypexgene & Phve\n");
	fprintf(file, "Email: ashtonmuiru@gmail.com & muriujames58@gmail.com\n");

	fclose(file);

	printf("AUTHORS FILE created successfully.\n");

	return (0);
}
