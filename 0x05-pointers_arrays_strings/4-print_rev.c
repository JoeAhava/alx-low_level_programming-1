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
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');

}
