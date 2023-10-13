#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
 
#define MAX_INPUT_SIZE 1024
 
/**
 * execute_command - Execute a shell command using execve
 * @command: The command to execute
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
        // This is the child process
        char *const args[] = {"/bin/sh", "-c", command, NULL};
        char *const env[] = {NULL};
 
        if (execve("/bin/sh", args, env) == -1)
        {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        // This is the parent process
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
    char input[MAX_INPUT_SIZE];
 
    while (1)
    {
        printf("Ashton$: ");
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            if (feof(stdin))  // Check for end-of-file condition
            {
                printf("Exited!\n");
                break;
            }
            else
            {
                perror("fgets");
                exit(EXIT_FAILURE);
            }
        }
 
        // Remove trailing newline character
        size_t input_length = strlen(input);
        if (input_length > 0 && input[input_length - 1] == '\n')
        {
            input[input_length - 1] = '\0';
        }
 
        // Check if the user wants to exit
        if (strcmp(input, "exit") == 0)
        {
            printf("Exited!\n");
            break;
        }
 
        // Execute the user's command
        execute_command(input);
    }
 
    return 0;
}
 
