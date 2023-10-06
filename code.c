#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program compares both numbers of boys and girls in an institution, prints the greater number.
 *
 * Return: Always 0 if successful.
 */
int main(void)
{
	int b = 0; /* The number of boys */
	int g = 0; /* The number of girls */

	printf("Enter the number of boys= ");
	scanf("%d", &b);

	printf("Enter the number of girls= ");
	scanf("%d", &g);

	if (b > g)
		printf("Boys are more than girls\n");
	else
		printf("Girls are more than boys\n");

	return (0);
}

