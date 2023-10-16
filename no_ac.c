#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("Argument count (argc) is %d\n", argc);

    while (*argv != NULL)
    {
        printf("argv = %s\n", *argv);
        argv++;
    }

    return 0;
}

