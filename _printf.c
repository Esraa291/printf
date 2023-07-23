#include "main.h"
/**
 * _printf - prints different datatypes on the screen according to input,
 * and call to get_printf function to call the functions that do the actual printing.
 * @format: string determining printed string and data types
 *
 * return: count of args printed in string and -1 on failure.
 */
void _print(char *format, ...)
{
	va_list ap;
	char str[];
	int i, j;/*for indexing*/
	int len, printed_len = 0;/*len for inputed str, prited_len for one printed*/

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	len = _strlen(format);
	for (i = 0; i < len; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_len++;
		}
		else
		{
			while (format[i + 1] !=  ' ' || format[i] != '\0')/*finding specifiers*/
			{
				i++;/*specifiers are found just before free space char*/
				
			}
			if (!(*format))
				continue;
			str = format + i;
			printed_len += get_printf(str);/*length printed value is the space on screen it taked not bytes*/
		}
	}
	va_end(ap);
	return (printed_len);
}
/**
 * get_printf - calls to the right function to print desired value.
 * @ap: pointer to the current argument
 *
 * Return: Sypposedy the count of the characters printed on this process
 */

int (*get_printf(str)(va_list ap))
{
	int i;
	fs[] =
	{
		{'c', _print_char}, {'s', print_Str}
		, {'i', print_int}
		, {NULL, NULL}
	};

	for (i = 0; fs[i].ch; i++)
	{
		if ( == fs[i].ch)
		{
			return (fs[i].f);
		}
	}
	return (NULL);
}
