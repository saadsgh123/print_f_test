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

	int counter = 0;
	va_list args;
/**
    if (format == NULL)
        return 0;
*/
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
	    if (*format == '%')
            {
                _putchar('%');
                counter++;
            }

            if (*format == 's')
            {
		 counter += print_string(va_arg(args, char *));;
       		 }
            
            else if (*format == 'c')
            {
                _putchar( va_arg(args, int));
            
            
                counter++;
            }
            else if (*format == 'd' || *format == 'i')
            {
                print_int(va_arg(args, int));

            }

            else if (*format == 'b')
            {
               decimalTobinary(va_arg(args, unsigned int));
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

