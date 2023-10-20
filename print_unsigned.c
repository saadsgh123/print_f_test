#include "main.h"
/**
 * print_uns - print unsigned numbers.
 * @args: format
 * @counter: counter.
 * Return: count.
 */
int print_uns(va_list args, int *counter)
{
	unsigned int n = va_arg(args, unsigned int);

	int num, d, e = 1, l = n % 10;

	n = n / 10;
	num = n;
	if (l < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		l = -l;
		(*counter)++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			e = e * 10;
			num = num / 10;
		}
		num = n;
		while (e > 0)
		{
			d = num / e;
			_putchar(d + '0');
			num = num - (d * e);
			e = e / 10;
			(*counter)++;
		}
	}
	_putchar(l + '0');
	(*counter)++;
	return (1);
}
