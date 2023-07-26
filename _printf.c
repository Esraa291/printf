#include "main.h"

/**
 * _printf - prints different datatypes on the screen according to input.
 * @format: string determining printed string and data types
 *
 * Return: count of args printed in string and -1 on failure.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j;/*for indexing*/
	int len = 0;
	form_spec fs[] =
	{
		{'c', print_char}, {'s', print_str}
		, {'R', print_rot13}, {'\0', NULL}
	};
	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')/*normal char case*/
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			i++;/*skip % to get to core*/
			for (j = 0; fs[j].ch != '\0'; j++)/*calling suitable function*/
			{
				if (fs[j].ch == format[i])
				{
					len += fs[j].f(ap);
				}
			}
		}
		i++;
	}
	_putchar('\0');
	va_end(ap);
	return (len);
}
