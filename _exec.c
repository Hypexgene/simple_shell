#include "shell.h"

/**
 * exec - Command is executed by using execve and fork.
 * @c: The command to be executed.
 */
void exec(char *c)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (child_pid == 0)
	{
		char *gs[] = {"/bin/sh", "-c", NULL, NULL};
		char *const env[] = {NULL};

		gs[2] = c;

		if (execve("/bin/sh", gs, env) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int standing;

		waitpid(child_pid, &standing, 0);
	}
}

