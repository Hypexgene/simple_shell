#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

void execute_command(char* command)
{
    if (access(command, F_OK) == 0)
        printf("%s: FILE FOUND\n", command);
    else
        printf("%s: FILE NOT FOUND\n", command);
}

int main(void)
{
    char *buffer = NULL;
    size_t buffer_size = 0;
    char *token;

    while (1)
    {
        write(1, "ASHTON$ ", 8);
        getline(&buffer, &buffer_size, stdin);

        token = strtok(buffer, " \t\n");

           if (strcmp(token, "which") == 0)
            {
               token = strtok(NULL, "\t\n");
	      while (token)
	      	{
		   	execute_command(token);
			token = strtok(NULL, "\t\n");
		}
	    }
            else
            {
                write(1, "NO EXISTING COMMAND\n", 23);
            }
	}
	      return (0);
}


