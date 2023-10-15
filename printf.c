#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char ch;
	int counter = 0;
	va_list args;

    if (format == NULL)
        return 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            if (*format == 's')
            {
                char *str = va_arg(args, char *);
                if (str == NULL)
                {
                    print_string("(null)");
                }
                else
                {
                    print_string(str);
                }
                counter++;
            }
            else if (*format == 'c')
            {
                ch = (va_arg(args, int));
                counter = print_char(ch);
            }
            else if (*format == 'd' || *format == 'i')
            {
                print_int(va_arg(args, int));
                counter++;
            }
            else if (*format == '%')
            {
                _putchar('%');
                counter++;
            }
            else if (*format == 'b')
            {
                decimalTobinary(va_arg(args, unsigned int));
                counter++;
            }
        }
        else
        {
            _putchar(*format);
            counter++;
        }

        format++;
    }

    va_end(args);
    return counter;
}
