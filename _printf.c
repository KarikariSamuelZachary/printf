#include "main.h"

/**
 * printf - mimics printf function
 * @format: identifier to look for
 * Return: integer
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37},
		{"%i", print_int}, {"%r", print_revs}, {"%R", print_rot13}, 
		{"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct},
		{"%x", print_hex}, {"%X", print_HEX}, {"%S", print_exc_string},
		{"%p", print_pointer}, {"%d", print_dec}
	};

	va_list args;
	int i = 0, len = 0;

	va_start(args,format);
	if (format == NULL || (format[0] == '&' && format[i] == '\0'))
		return (-1);
Here:

	while (format[i] !='\0')
	{
		int j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[i] == format[i + 1])
			{
				len =len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
