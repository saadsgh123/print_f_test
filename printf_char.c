#include "main.h"
/**
 * print_char - Entry point
 * @c: input
 * Return: Always 0
 */
int print_char(char *c)
{
        int counter = 0, i;
        for (i = 0; c[i] != '\0'; c++)
	{
        _putchar(c[i]);
                counter++;

        }
return counter;
}
