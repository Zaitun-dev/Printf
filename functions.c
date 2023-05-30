#include "main.h"
#include <unistd.h>

/**
* print_char - Function to print a character
* @ap: The va_list containing the character argument
*
* Return: Number of characters printed (always 1)
*/

/*function to print a character*/
int print_char(va_list ap)
{
char c = va_arg(ap, int);
_putchar(c);
return (1);
}
/**
* print_string - Function to print a string
* @str: The string to be printed
*
* Return: Number of characters printed (length of the string)
*/

/*function to print a string*/
int print_string(char *str)
{
int i = 0;
if (str == NULL)
str = "(null)";
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
