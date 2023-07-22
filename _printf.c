#include "main.h"

/**
 * _printf - prints all kinds of data types on screen
 * @format: string determining printed string and data types
 *
 * return: count of args printed in string.
 */

void _print(char *format, ...)
{
	va_list ap;
	int i, j, len, count;
	fs[] = 
	{
		{'c', _print_char}, {'s', print_str}
		{'i', /*add func name*/}, {'d', /*Add func name*/}
		, {NULL, NULL}
	};

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	len = _strlen(format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			i++;/*skip printing until ' '*/
			for (j = 0; j < 4 && format[i] != '\0'; j++)
			{
				if (fs[j].ch == format[i])
			}
		}
		_putchar(format[i]);
		count++;
	}
	va_end(ap);
	return (count);
}
