#include "myshell.h"
/**
 * stringdup - make a string dublicate.
 * @src: the source to be doblicated.
 * Return: pointer to the  string
 */
char *stringdup(char *src)
{
size_t count;
size_t length_of_str;
char *dub;
if (src == NULL)
return (NULL);
length_of_str = find_length(src);
dub = malloc(length_of_str + 1);
if (dub == NULL)
{
perror("./hsh");
exit(EXIT_FAILURE);
}
for (count = 0; count < length_of_str; count++)
dub[count] = src[count];
dub[length_of_str] = '\0';
return (dub);
}
