#include "main.h"
/**
 * get_spec - Entry point
 * @format: input
 * Return: Always 0
 */
int get_spec(char format)
{
	switch (format)
	{
		case 'c': return TYPE_1;
		case 's': return TYPE_1;
		case 'd': return TYPE_2;
		case 'i': return TYPE_2;
		case 'b': return TYPE_2;
		case '%': return TYPE_1;
		case 'u': return TYPE_3;
		case 'o': return TYPE_3;
		case 'x': return TYPE_3;
		case 'X': return TYPE_3;
	}
	return (0);
}
