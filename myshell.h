#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
int mygetline(char **str, size_t *n);
int tokener1(char *input);
void _copier(char *input, char *input_cpy);
char *stringdup(char *input);
char  **tokener(char *str);
int myexit(char **args);
void prompt(void);
char *my_strdup(char *str);
extern char **environ;
int cmd_excuter(char **cmd, char *argv);
int str_compare(char *str1, char *str2);
int find_length(char *str);
char *mypath(char *cmd, char *arg0);
#endif
