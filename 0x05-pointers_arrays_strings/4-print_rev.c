#include "holberton.h"

/**
 * print_rev - mai function
 *
 * @s: pointer of char
 *
 * Return: nothing
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');

}