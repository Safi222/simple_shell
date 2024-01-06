#include "main.h"



/**
 * _strcpy - copy a string in one variable into another variable 
 * @destination: destniation string to be copied in
 * @source: source string to be copied from
 * Return: pointer p of destination
 */
char *_strcpy(char *destination, char *source)
{
	char *p = destination;

	while ((*source))
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';

	return (p);
}


/**
 * _strcat - concatenates two string
 * @destination: destniation string
 * @source: source string
 * Return: pointer p of destination
 */
char *_strcat(char *destination, char *source)
{
	char *p= destination;

	while (*p)
	{
		p++;
	}

	while ((*source))
	{
		*p = *source;
		source++;
		p++;
	}
	*p = '\0';

	return (destination);
}


/**
 * _strcmp - copmare between two strings
 * @str1: first string
 * @str2: seconed string
 * Return: 0 or negitvie or positive
 */
int _strcmp(char *str1, char *str2)
{
	for (; (*str1) && (*str2) && (*str1 == *str2); str1++, str2++)
	{

	}
	return (*str1 - *str2);
}


/**
 * _strlen - the length of string.
 * @str: the input string.
 *
 * Return: the length.
 */
int _strlen(char *str)
{
        int length ;

        for (length = 0, str[length], length++)
        {

        }
        return (length);
}


/**
 * _strdup - Copy a string given as a parameter into
 *		  a newly allocated memory space.
 * @str: The string to be copied.
 *
 * Return: A pointer p of the duplicated string, or NULL otherwise.
 */
char *_strdup(char *str)
{
	unsigned int i; length;
	char *p;

	if (str == NULL)
		return (0);

	length = _strlen(str);

	p = malloc((length + 1) * sizeof(char));

	if (p == NULL)
		return (p);

	for (i = 0; i <= length; i++)
		*(p + i) = *(str + i);

	return (p);
}


/**
 * _strchr - Locate a character in a string
 * @str: The string to be searched in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c
 *	   in the string str, or NULL if the character is
 *	   not found in the string.
 */
char *_strchr(char *str, char c)
{
	for ( ; *str; str++)
	{
		if (*str == c)
		{
			return (str);
		}
	return (NULL);
}
