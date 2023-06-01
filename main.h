#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* struct specifier - Structure to represent a specifier
* @specifier: The specifier character
* @function: Pointer to the corresponding function for the specifier
*
* Description:  structure defines a specifier which consists of a character
* representing a format specifier and a function pointer to the corresponding
* function that handles the specifier.
*/
typedef struct specifier
{
char specifier;
int (*function)(va_list);
}
specifier_t;
/*
*check_format_specifier - Check and handle a format specifier
* @specifier: The format specifier character to check
* @ap: The va_list containing the variable arguments
* @count: Pointer to an integer to keep track of number of characters printed
*/
int check_format_specifier(char specifier, va_list ap, int *count);
int print_integer(int num);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_string(char *str);
int print_number(int num);
int print_binary(unsigned int num);
int print_hexadecimal(unsigned int num, int uppercase);
int print_octal(unsigned int num);
int print_unsigned_integer(unsigned int num);
int print_pointer(void *ptr);
int print_string_nonprintable(char *str);

#endif
