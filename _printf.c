#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
<<<<<<< HEAD

void print_buffer(char bufer[], int *buff_ind);
=======
>>>>>>> 3e1dc3fcb2825f8fcc10e25dc568b010adc9b2c3
/**
 * _printf - print formatted string
 * @format: the formatted string
 * Return: the string length
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int i, printed_chars = 0;
	int flags, width, precision, size , buff_ind =0;

	va_list list;
	char buffer[BUUF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_in);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer;
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
		print_buffer(buffer, &buff_ind);

		va_end(list);

		return (printed_chars);
}

/*
 * printed_buffer - prints the contents of the buffer if it exist
 * @buffer: array of chars
 * @buff_ind: index at which to add next char, represents the lenght.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if(*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
=======
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
>>>>>>> 3e1dc3fcb2825f8fcc10e25dc568b010adc9b2c3
}
		
