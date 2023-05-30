#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct specifier
{
        char specifier;
        int (*function)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_string(char *str);
int print_number(va_list ap);



#endif
