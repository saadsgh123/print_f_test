#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
		format++;
	switch(*format)
	{
		case '%':
			write(1,"%",1);
			counter++;
			break;
		
		case 's':
		
			counter += print_string(va_arg(args, char *));
			break;
		case 'c':
		
			_putchar(va_arg(args, int));
			counter++;
			break;
		
		case 'd':
		case 'i':
		
			counter += print_int(va_arg(args, int));
			break;
		case 'b':
		
			counter += decimalTobinary(va_arg(args, unsigned int));
			break;
		default:
                    
                    write(1, "%", 1);
                    write(1, format, 1);
                    counter += 2;
                    break;
	}
	}
	else
	{
		write(1,format, 1);
		counter++;
	}
		format++;
	}
	va_end(args);

	return (counter);
}

int print_string(char *str)
{
	int counter = 0;

	if (!str)
	{
		str = "(null)";
	}
	while (*str)
	{
		write(1, str, 1);

		counter++;
		str++;
	}
	return (counter);
}

int print_int(int n)
{
    int count = 0;
    int sign = 1;
    
    if (n < 0)
    {
        write(1, "-", 1);
        count++;
        sign = -1;
        n = -n;
    }
    
    int temp = n;
    int num_digits = 0;
    while (temp > 0)
    {
        temp /= 10;
        num_digits++;
    }
    
    if (n == 0)
    {
        write(1, "0", 1);
        count++;
    }
    else
    {
        while (num_digits > 0)
        {
            int divisor = 1;
            for (int i = 1; i < num_digits; i++)
            {
                divisor *= 10;
            }

            int digit = n / divisor;
            char digit_char = '0' + digit;
            write(1, &digit_char, 1);
            count++;
            n -= digit * divisor;
            num_digits--;
        }
    }

    return (count);
}

int decimalTobinary(unsigned int d)
{
	int counter = 0;
	int j;
	int quotient[32];
	int i = 0;

	if (d == 0)
	{
		_putchar('0');
		return 1;
	}

	while (d > 0)
	{
		quotient[i] = d % 2;
		d = d / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--) {
		_putchar(quotient[j] + '0');
		counter++;
	}

	return (counter);
}

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	_putchar(c);
	return (1);
}
