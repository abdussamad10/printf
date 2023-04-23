#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - print formatted string
 * @format: the formatted string
 *
 * Return: the string length
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list	args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	i = _print_format(format, args);
	va_end(args);
	return (i);
}
