#include "main.h"

/**
 * _strlen - erturns the length of a string
 * @s: a string.
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;


	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy a string
 * @dest: copied to string
 * @src: copied from string
 * @n: the number of characters in source string
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
