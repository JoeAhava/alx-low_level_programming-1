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
	int j;

	while (*s)
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');

}
