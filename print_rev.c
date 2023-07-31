#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @ap: pointer to the string to be reversed
 *
 * Return: the length of the string
 */

int print_rev(va_list ap)
{
	int len, i;
	char *str, *ptr;

	str = va_arg(ap, char *);
	if (str == NULL)
		return (0);
	len = _strlen(str);
	ptr = malloc((len + 1) * sizeof(char));

	for (i = len; i >= 0; i--)
		_putchar(str[i]);
	free(ptr);
	return (len);
}
