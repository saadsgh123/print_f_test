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

        char ch;
         int num;
            unsigned int value;
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

                        counter += print_string(args);
                        break;
                case 'c':

                         ch = (va_arg(args, int));
                        write(1, &ch, 1);
                        counter++;
                        break;

                case 'd':
                case 'i':
                         num = va_arg(args, int);
                        counter += print_int(num);
                        break;
                case 'b':
                          value = va_arg(args, unsigned int);

                        counter += decimalTobinary(value);
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

int print_string(va_list args) {
    char *str = va_arg(args, char *);
    if (!str) {

        write(1, "(null)", 6);
        return 6;
    } else {
        int count = 0;
        while (*str) {
            write(1, str, 1);
            str++;
            count++;
        }
        return count;
    }
}
int print_int(int n)
{
    int counter = 0;
    int div = 1;
    int temp = n;
    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;
        counter++;
    }



    while (temp > 9)
    {
        temp /= 10;
        div *= 10;
    }

    while (div > 0)
    {
        int digit = n / div;
        _putchar(digit + '0');
        n -= digit * div;
        div /= 10;
        counter++;
    }

    return counter;

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
