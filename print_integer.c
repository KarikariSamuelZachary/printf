#include "main.h"

/**
 * print_int - prints an integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_integer(va_list args) {
    int n = va_arg(args, int);
    int count = 0;

    /* Handle negative numbers */
    if (n < 0) {
        _putchar('-');
        count++;
        n = -n;
    }

    /* Handle the case when n is 0 */
    if (n == 0) {
        _putchar('0');
        return 1;
    }

    /* Calculate the number of digits in n */
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    /* Print the digits */
    while (n != 0) {
        int digit = n % 10;
        _putchar('0' + digit);
        n /= 10;
    }

    return count;
}
