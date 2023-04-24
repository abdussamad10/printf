#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_binary - the unsigned int argument is converted to binary
 * @n: number arguement
 * Return: count
 */
void print_binary(unsigned int n)
{
    if (n > 1) {
        print_binary(n / 2);
    }
    putchar('0' + n % 2);
}

/**
 *_printf - print function
 *@format: list of argument types
 *Return: COUNT
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format) {
		if (*format == '%') 
	{
		format++;
		if (*format == 'b') 
		{
			unsigned int n = va_arg(args, unsigned int);
			print_binary(n);
			count += sizeof(unsigned int) * 8;
		} 
		else 
		{
			putchar('%');
			count++;
		}
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}
