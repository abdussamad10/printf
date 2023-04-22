#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list count;

	va_start(count, format);

	vprintf(format, count);

	va_end(count);
	return (0);
}
