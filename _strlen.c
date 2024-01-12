
# include "myshell.h"
/**
 * find_length - find string length
 * @str: a string the lenth to be finded
 * Return: on success length of the string
 *         on failure -1.
 */
int find_length(char *str)
{
int n;
for (n = 0; str[n]; n++)
;
return (n);
}
