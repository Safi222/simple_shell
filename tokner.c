#include "myshell.h"
/**
 * tokener - Tokenizes dtring.
 * @input: string to be tokenized.
 * Return:  arrays of strings.
 */
char  **tokener(char *input)
{
char *delim = " \t\n", *token = NULL, *input_cpy;
int token_count = 0, n = 0;
char **cmd = NULL;
if (input == NULL)
return (NULL);
token_count = tokener1(input);
if (token_count == -1)
{
free(input);
input = NULL;
return (NULL);
}

input_cpy = stringdup(input);
if (input_cpy == NULL)
{
free(input);
input = NULL;
return (NULL);
}
cmd = malloc(sizeof(char *) * (token_count + 1));
if (cmd == NULL)
{
free(input);
return (NULL);
}
token = strtok(input_cpy, delim);
while (token)
{
cmd[n] = stringdup(token);
token = strtok(NULL, delim);
n++;
}
cmd[n] = NULL;
free(input);
input = NULL;
free(input_cpy);
input_cpy = NULL;
return (cmd);
}
