#ifndef MAIN_H
#define MAIN_H

/*Libraries included*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct specifiers - contains format specifiers as called in printf
 * and the function that executes them
 * @ch: the character representing the specifier
 * @f: function pointer to suitable 
 */
typedef struct format specifiers
{
	char ch;
	int (f*)(va_list)

} fs;

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);


/*Prototyoes*/

/*functions to get output on screen*/
int _putchar(char c);

/*printf*/
_printf(const char *format, ...);

/*called functions*/
_print_char(va_list ap);
_print_str(va_list ap);

/*Other helful functions*/
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
#endif
