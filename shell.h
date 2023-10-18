#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

void exec(char *c);
char* userinput();
int spl(const char* sm, const char* mt);
void _prompt(void);
size_t _strlen(const char *l);
int p_man(char pm);
#endif
