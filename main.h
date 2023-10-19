#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;


int _printf(const char *format, ...);
int _putchar(char c);
int printf_character(va_list val);
int printf_string(va_list val);

#endif
