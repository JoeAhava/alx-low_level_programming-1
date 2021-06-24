#include "holberton.h"

/**
 * print_triangle - starting function
 *
 * @size: intiger of a function
 *
 */

void print_triangle(int size)
{
	for (int i = 0; i <= size; i++)
	{
		for (int j = size; j > 0; j++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
