#include "main.h"
/**
 * _printf - Entry point
 * @f: format
 * Return: Always 0
 */
int _printf(const char *f, ...)
{
int counter = 0;

va_list args;
va_start(args, f);

if (!f)
	return (-1);
while (*f)
{
	if (*f == '%')
	{
		f++;
		if (*f == '\0')
			return (-1);
		if (*f == 'c' || *f == 's' || *f == '%')
			function1(f, args, &counter);
		else if (*f == 'd' || *f == 'i' || *f == 'b')
			function2(f, args, &counter);
		else if (*f == 'x' || *f == 'X' || *f == 'u' || *f == 'o')
			function3(f, args, &counter);
		else
		{
			write(1, "%", 1);
			write(1, f, 1);
			counter += 2;
		}
	}
	else
	{
		write(1, f, 1);
		counter++;
	}
	f++;
}
va_end(args);
return (counter);
}