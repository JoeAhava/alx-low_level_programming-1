#include "holberton.h"

/**
 * print_square - starting function
 *
 * @size: intiger of a function
 *
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (int i = size; i > 0; i--)
		{
			for (int j = 0; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
