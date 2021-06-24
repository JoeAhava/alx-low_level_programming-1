#include "holberton.h"

/**
 * print_triangle - starting function
 *
 * @size: intiger of a function
 *
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
