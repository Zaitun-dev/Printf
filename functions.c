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
/**
* print_binary - Prints the binary representation of an unsigned integer
* @num: The unsigned integer to convert and print in binary
*/
/* functions that prints binary*/
int print_binary(unsigned int num)
{
    int binary[32];
    int i = 0;
    int count = 0;
    int j;

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        _putchar('0' + binary[j]);
        count++;
    }

    return count;
}
/*function that prints a hexadecimal*/
int print_hexadecimal(unsigned int num, int uppercase)
{
    char hex[16];
    int i = 0;
    int count = 0;
    int j;

    if (uppercase)
    {
        for (i = 0; i < 10; i++)
            hex[i] = '0' + i;
        for (; i < 16; i++)
            hex[i] = 'A' + (i - 10);
    }
    else
    {
        for (i = 0; i < 10; i++)
            hex[i] = '0' + i;
        for (; i < 16; i++)
            hex[i] = 'a' + (i - 10);
    }

    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        int hex_digits[32];
        i = 0;

        while (num > 0)
        {
            hex_digits[i] = num % 16;
            num /= 16;
                        i++;        }

        for (j = i - 1; j >= 0; j--)
        {
            _putchar(hex[hex_digits[j]]);
            count++;
        }
    }

    return count;
}
/*function that prints an octal*/
int print_octal(unsigned int num)
{
    int octal[32];
    int i = 0;
    int count = 0;
    int j;

    while (num > 0)
    {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        _putchar('0' + octal[j]);
        count++;
    }

    return count;
}
/*function that prints an unsigned int*/
int print_unsigned_integer(unsigned int num)
{
    int digits[32];
    int i = 0;
    int count = 0;
    int j;

    while (num > 0)
    {
        digits[i] = num % 10;
        num /= 10;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        _putchar('0' + digits[j]);
        count++;
    }

    return count;
}
/*function that prints an address*/
int print_pointer(void *ptr)
{
    unsigned long int address = (unsigned long int)ptr;
    int count = 0;

    _putchar('0');
    _putchar('x');
    count += 2;

    count += print_hexadecimal(address, 0);

    return count;
}
