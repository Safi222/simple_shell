#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
int mygetline(char **str, size_t *n);
void string_copier(char *input, char *input_cpy);
char  **tokener(char *str);
int length_finder(char *str);
void prompt(void);
char *my_strdup(char *str);
void cmd_excuter(char **command, char *argv);
#endif
