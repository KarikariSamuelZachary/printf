#include "main.h"

int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = var_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 -i)) & num);
		if (p >> (31 -1))
			flag = 1:
		if (flag)
		{
			b = p >> (31 -1);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}

