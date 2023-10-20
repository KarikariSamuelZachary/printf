#include "main.h"
#include <stdarg.h>

/**
 * print_binary - prints an unsigned integer in binary format
 * @args: argument to print
 * Return: number of characters printed
 */
int print_binary(va_list args) {
    unsigned int n = va_arg(args, unsigned int);
    int count = 0;

    if (n == 0) {
        _putchar('0');
        return 1;
    }

    /* Calculate the binary representation */
    unsigned int mask = 1U << (sizeof(unsigned int) * 8 - 1);
    int leading_zero = 1;

    while (mask > 0) {
        if ((n & mask) != 0) {
            _putchar('1');
            leading_zero = 0;
        } else if (!leading_zero) {
            _putchar('0');
        }
        mask >>= 1;
        count++;
    }

    return count;
}
