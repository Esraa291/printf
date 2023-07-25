#include "main.h"

/**
 * _printf - prints different datatypes on the screen according to input.
 * @format: string determining printed string and data types
 *
 * Return: count of args printed in string and -1 on failure.
 */
int _print(char *format, ...)
{
	va_list ap;
	int i, j;/*for indexing*/
	int len = 0;
	form_spec fs[] =
	{
		{'c', print_char}, {'s', print_str}
		, {'\0', NULL}
	};

	va_start(ap, format);
	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			while (format[i + 1] !=  ' ' || format[i] != '\0')/*finding specifiers*/
				i++;/*specifiers are found just before free space char*/
			if (!(*format))
				continue;
			for (j = 0; fs[j].ch; j++)
			{
				if (fs[j].ch == format[i])
				{
					len += fs[j].f(ap);
				}
			}
			continue;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
