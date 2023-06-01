#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
case 'd':
case 'i':
(*count) += print_integer(va_arg(ap, int));
break;
case 'b':
print_binary(va_arg(ap, unsigned int));
(*count) += sizeof(unsigned int) * 8;
break;
default:
_putchar('%');
_putchar(specifier);
(*count) += 2;
break;
}
return (0);
}
