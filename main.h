#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/*flags*/
#define F_MINUX 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

int _putchar(char c);
int _puts(char *str);
void print_num(long n, int *len);
int _printf(const char *format, ...);


#endif


