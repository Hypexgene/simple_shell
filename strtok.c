#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _strtok(const char *string, const char *dm);

int main() {
    const char *enter = "Ashton & James' project";
    const char *dm = ",";

    _strtok(enter, dm);

    return 0;
}

void _strtok(const char *string, const char *dm) {
    size_t y = 0;
    size_t i;
    size_t ash = strlen(string);
    char *letter = (char *)malloc(ash + 1);

    if (letter == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < ash; i++) {
        if (string[i] == dm[0] || string[i] == '\0') {
            letter[y] = '\0';

            if (y > 0) {
                printf("%s\n", letter);
                y = 0;
            }
        } else {
            letter[y++] = string[i];
        }
    }

    free(letter);
}

