#include "main.h"
/**
 * print_char - Entry point
 * @c: input
 * Return: Always 0
 */
int print_char(char *c)
{
        int countr = 0, i;
        for (i = 0; c[i]; c++)
	{
        _putchar(c[i]);
                countr++;

        }
return (0);
}
