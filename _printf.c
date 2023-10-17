#include "main.h"
/**
 * _printf - Entry point
 * @format: format
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
int counter = 0;
va_list args;

va_start(args, format);
if (!format)
	return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
return (-1);
if (*format == 'c' || *format == 's' || *format == '%')
string_helper(format, args, &counter);
else if (*format == 'd' || *format == 'i' || *format == 'b')
decimal_helper(format, args, &counter);
else if (*format == 'x' || *format == 'X' || *format == 'u' || *format == 'o')
hexdeci_helper(format, args, &counter);
else
{
write(1, "%", 1);
write(1, format, 1);
counter += 2;
}
}
else
{
write(1, format, 1);
counter++;
}
format++;
}
va_end(args);
return (counter);
}
