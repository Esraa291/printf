#include "main.h"

/**
 * printt_str - prints strings when called
 * @ap: the pointer to the function to be printed
 *
 * Return: the lenght of the string
 */

int print_str(va_list ap)
{
	int i, len;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";/*actual printf prints this when NULL is entered*/
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}
