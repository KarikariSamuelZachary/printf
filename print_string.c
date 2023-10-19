#include "main.h"

/**
 * printf_string - prints a string
 * @val: arguments
 * Return: number of characters printed
 */
int printf_string(va_list val)
{
    char *str = va_arg(val, char *);
    int count = 0;

    if (str != NULL) {
        while (str[count] != '\0') {
            _putchar(str[count]);
            count++;
        }
    }

    return count;
}
