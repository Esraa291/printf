#include "main.h"

/**
 * print_rot13
 * @ap: pointer to string to encode in rot13
 *
 * Return: string length
 */

int print_rot13(va_list ap)
{
	char *str;
	int i, j, len;
	char *alph_lower = "abcdefghijklmnopqrstuvwxyz";
	char *alph_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; i < 6; i++)
		{
			putchar(str[i]);
		}
		return (_strlen(str));
	}
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 25; j++)
		{
			if (str[i] == alph_lower[j])
			{
				if (j > 12)
					_putchar(alph_lower[j - 13]);
				else
					_putchar(alph_lower[j + 13]);
			}
			else if (str[i] == alph_upper[j])
			{
				if (j >= 12)
					_putchar(alph_upper[j - 13]);
				else
					_putchar(alph_upper[j + 13]);
			}

		}
	}
	return (len);
}
