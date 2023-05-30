#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
* check_format_specifier - Check and handle a format specifier
* @specifier: The format specifier character to check
* @ap: The va_list containing the variable arguments
* @count: Pointer to an integer to keep track of number of characters printed
*
* Return: Number of characters printed for the given specifier
*/
int check_format_specifier(char specifier, va_list ap, int *count);

/**
* _printf - prints any function as specified by the format
* @format: format used
* @...:variadic arguments passed (unknown)
* Return: the output
*/
int _printf(const char *format, ...)
{
int count = 0;
int i = 0;
va_list ap;
va_start(ap, format);
while (format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
_putchar(format[i]);
count++;
}
else
{
i++;
count += check_format_specifier(format[i], ap, &count);
}
i++;
}
va_end(ap);
return (count);
}
int check_format_specifier(char specifier, va_list ap, int *count)
{
switch (specifier)
{
case 'c':
_putchar(va_arg(ap, int));
(*count)++;
break;
case 's':
(*count) += print_string(va_arg(ap, char*));
break;
default:
_putchar('%');
_putchar(specifier);
(*count) += 2;
break;
}
return (0);
}
