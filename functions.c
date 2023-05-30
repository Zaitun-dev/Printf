#include "main.h"
#include <unistd.h>

/*function to print a character*/

        int print_char(va_list ap)
{
        char c = va_arg(ap, int);

        _putchar(c);
        return (1);
}
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
