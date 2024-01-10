# include "myshell.h"
/**
* mygetline - read a line from stdin
* @str: a double pointer used to store allocated buff
* @n: ponter to int that used to store the amount of count
* Return: on success number of read, on failure(1)
*/

int mygetline(char **str, size_t *n)
{
ssize_t read_no;

read_no = getline(str, n, stdin);
if (read_no == -1)
return (read_no);
return (read_no);
}
