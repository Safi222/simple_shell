#include "myshell.h"

/**
* string_copier - copy string from its origin
* @input: pointer to the source string
* @input_cpy: pointer to the destination string
*/

void _copier(char *input, char *input_cpy)
{
int i = 0;

while (input[i])
{
input_cpy[i] = input[i];
i++;
}
if (input_cpy[i - 1] == '\n')
input_cpy[i - 1] = '\0';
}
