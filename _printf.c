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
	int a;
	int lenght, count = 0;
	va_list args;
	va_start(args, format);
	lenght = strlen(format);
	for (a = 0; a < lenght; a++)
	{
		if (*(format + a) == '%')
		{
			switch (*(format + a + 1))
			{
				case '%':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					_printer(va_arg(args, char *));
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(*(format + a));
			count++;
		}
	}
	va_end(args);
	return (count);
}
