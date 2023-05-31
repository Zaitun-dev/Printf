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
/**
* print_integer - Prints the digits of an integer.
* @num: The integer to be printed.
*
* Return: The number of characters printed.
*/
/*function to print a number*/
int print_integer(int num)
{
int count = 0;
int divisor = 1;
if (num == 0)
{
_putchar('0');
return (1);
}
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
while (divisor <= num / 10)
divisor *= 10;
while (divisor > 0)
{
int digit = num / divisor;
_putchar(digit + '0');
count++;
num %= divisor;
divisor /= 10;
}
return (count);
}
/* functions that prints binary*/
void print_binary(unsigned int num)
{
if (num > 1)
{
print_binary(num / 2);
printf("%u", num % 2);
}
}
