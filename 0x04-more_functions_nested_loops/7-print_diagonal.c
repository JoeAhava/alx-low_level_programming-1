#include "holberton.h"

/**
 * print_diagonal - starting function
 *
 * @n: intiger of a function
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar("\n");
	else
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
