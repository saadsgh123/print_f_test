#include "main.h"
/**
 * print_decimal - prints decimal
 * @args: dec to print
 * @counter: counter
 * Return: number of characters printed
 */
int print_decimal(va_list args, int *counter)
{
	int n = va_arg(args, int);
	int num, l = n % 10, d;
	int exp = 1;

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
		exp = exp * 10;
		num = num / 10;
	}
	num = n;
	while (exp > 0)
	{
		d = num / exp;
		_putchar(d + '0');
		num = num - (d * exp);
		exp = exp / 10;
	(*counter)++;
	}
	}
	_putchar(l + '0');
	(*counter)++;
	return (1);
}
