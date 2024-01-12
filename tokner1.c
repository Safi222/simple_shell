#include "myshell.h"
/**
* tokener1 - tokenize a string
*@input: a string to be tokenized
*Return: number of token on success,and -1 on ulure non-zero
*/
int tokener1(char *input)
{
char *cpy, *token, *delim;
int token_count;
cpy = NULL;
token = NULL;
delim = " \t\n";

token_count = 0;
cpy = stringdup(input);
token = strtok(cpy, delim);
if (token == NULL)
{
return (-1);
}
while (token)
{
token = strtok(NULL, delim);
token_count++;
}
free(cpy);
cpy = NULL;
return (token_count);
}
