#include <stdio.h>
#include <stdlib.h>

int main(int ac, char**av)
{
	int i;
	int totality = 0;

	printf("argc or ac = %d\n", ac);
	printf("argv theme is argv[]\n");


	for(i = 1; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, av[i]);
		totality += atoi(av[i]);
	}
	printf("totality is %d\n", totality);
	return (0);
}
