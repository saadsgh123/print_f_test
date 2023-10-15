#include "main.h"
/**
 * print_string - Returns the lenght of a string.
 * @str: Type char pointer
 * Return: c.
 */
int print_string(char *str)
{
	int counter = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		counter++;
	}
	return counter;
}
