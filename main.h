#ifndef MAIN_H
#define MAIN_H

/*Libraries included*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <limits.h>


/*constants*/
#define BUF_MAX 1024

/**
 * struct specifiers - contains format specifiers as called in printf
 * and the function that executes them
 * @ch: the character representing the specifier
 * @f: function pointer to suitable 
 */
typedef struct format_specifiers
{
	char ch;
	int (*f)(va_list);

} form_spec;

/*Prototyoes*/

/*functions for stdout*/
int _putchar(char c);

/*printing call*/
int _printf(const char *format, ...);

/*called functions*/
int print_char(va_list ap);
int print_str(va_list ap);
int print_rev(va_list ap);
int print_rot13(va_list ap);

/*Other helful functions*/
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);

#endif
