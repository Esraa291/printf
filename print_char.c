#include "main.h"

/**
 * print_ch - prints a character on call
 * ap: pointer to the character to be printed
 *
 * Return: 1(basically the count of characters)
 */

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);
}
