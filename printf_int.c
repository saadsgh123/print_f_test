#include "main.h"
/**
 * print_int - Entry point
 * @n: input
 * Return: Always 0
 */
int print_int(int n)
{
int counter = 0;
if (n / 10)
{
print_int(n / 10);
}
_putchar('0' + n % 10);
counter++;
return counter;
}
