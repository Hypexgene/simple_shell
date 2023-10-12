#include "shell.h"
#include <stdio.h>

void _strtok(const char *string, char dm);

int main()
{
        const char *enter = "Ashton & James' project";
        char dm = ',';

        _strtok(enter, dm);

        return (0);
}

void _strtok(const char *string, char dm)
{
	int ash = strlen(string);
	char letter[ash + 1];
	int i, y = 0;

	for (i = 0; i <= ash; i++)
	{
		if (string[i] == dm || string[i] == '\0')
		{
			letter[y] = '\0';

		if (y > 0)
		{
			printf("%s\n", letter);
			y = 0;
		}
	}
		else
		{
			letter[y++] = string[i];
		}
	}
}

