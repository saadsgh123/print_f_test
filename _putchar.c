#include "main.h"
/**
 * _putchar - Entry point
 * @c: c
 * @count: de
 * Return: Always 0
 */
int _putchar(char c, int *count)
{
	(*count)++;
	return (write(1, &c, 1));
}
