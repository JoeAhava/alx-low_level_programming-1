#include "holberton.h"
/**
 *  print_line - starting function
 *
 *  @n: intiger of a funtion
 *
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}

}
