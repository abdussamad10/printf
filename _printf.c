#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - print formatted string
 * @format: the formatted string
 * Return: the string length
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					len += putchar(va_arg(args, int));
					break;
				case 's':
					len += printf("%s", va_arg(args, char *));
					break;
				case '%':
					len += putchar('%');
					break;
			}
		}
		else
		{
			len += putchar(*format);
		}

		format++;
	}

	va_end(args);
	return (len);
}
