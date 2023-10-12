#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point for the program
 *
 * Description: This program demonstrates the fork system call.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n");

	pid = fork();
	if (pid == -1)
	{
	perror("Error:");
	return (1);
	}

	printf("After fork\n");
	my_pid = getpid();
	printf("My PID is %u\n", my_pid);

return (0);
}
