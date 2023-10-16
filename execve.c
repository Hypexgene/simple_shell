#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

/**
 * execute_command - Execute a shell command using execve
 * @command: The command to execute
 *
 * Return: None
 */
void execute_command(char *command)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0)
    {
        char *temp_args[] = {"/bin/sh", "-c", NULL, NULL};
        char *const env[] = {NULL};

        /* Use a temporary array for static initialization */
        temp_args[2] = command;

        if (execve("/bin/sh", temp_args, env) == -1)
        {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        int status;

        waitpid(child_pid, &status, 0);
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    size_t input_length;
    char input[MAX_INPUT_SIZE];

    while (1)
    {
        printf("Ashton$: ");
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            if (feof(stdin))
            {
                printf("Exit\n");
                break;
            }
            else
            {
                perror("fgets");
                exit(EXIT_FAILURE);
            }
        }

        input_length = strlen(input);

        if (input_length > 0 && input[input_length - 1] == '\n')
        {
            input[input_length - 1] = '\0';
        }

        if (strcmp(input, "exit") == 0)
        {
            printf("Exited!\n");
            break;
        }

        execute_command(input);
    }

    return 0;
}

