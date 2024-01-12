#include "myshell.h"

/**
* str_compare - it compare two string values.
* @str1: pointer to the first string.
* @str2: pointer to the second string.
* Return: 0 if the strings are equal and 1 if the string is not equal.
*/
int str_compare(char *str1, char *str2)
{
int s1, s2, i = 0, total = 0;

s1 = find_length(str1);
s2 = find_length(str2);
if (s1 == s2)
{
while (str1[i] && str2[i])
{
total = total + (str1[i] - str2[i]);
i++;
}
if (total == 0)
return (total);
}
return (1);
}
