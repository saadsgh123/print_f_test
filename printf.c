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
	int i;

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
              	 char *str = va_arg(args, char*);
		 for (i = 0; str[i] != '\0'; i++) {
           	 _putchar(str[i]);
		 counter++;
       		 }
            }
            else if (*format == 'c')
            {
                int c = va_arg(args, int);
               _putchar(c);
            
                counter++;
            }
            else if (*format == 'd' || *format == 'i')
            {
                print_int(va_arg(args, int));
                counter++;
            }

            else if (*format == 'b')
            {
               decimalTobinary(va_arg(args, unsigned int));
                counter++;
            }
	    else if (*format != '%'){
                putchar('%');
                putchar(*format);
                counter += 2;
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

