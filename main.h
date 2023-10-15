#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_val(int n, int n_chars_printed, int base);
int print_uint(unsigned int n, int n_chars_printed);
int print_hex(long n, int n_chars_printed, int cap);

#endif
