#include "main.h"

/**
 * print_rot13
 * @ap: pointer to string to encode in rot13
 *
 * Return: string length
 */

int print_rot13(va_list ap)
{
	char *str, *ptr;
	int i, j, len;
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	str = va_arg(ap, char *);
	len = _strlen(str);
	if (str == NULL)
		return (0);
	ptr = malloc(sizeof(char) * (len + 1));
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			for (j = 0; lower[j] != '\0'; j++)
			{
				if (str[i] == lower[j])
				{
					if (j > 12)
						_putchar(lower[j - 13]);
					else
						_putchar(lower[j + 13]);
				}
				else if (str[i] == upper[j])
				{
					if (j > 12)
						_putchar(upper[j - 13]);
					else
						_putchar(upper[j + 13]);
				}
			}
		}
		else
			_putchar(str[i]);
	}
	free(ptr);
	return (len);
}
