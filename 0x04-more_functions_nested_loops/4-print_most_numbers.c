#include "holberton"

/**
 * print_most_numbers - starting function
 *
 */

void print_most_numbers(void)
{
	for (int i = '0'; i < '10'; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n')
}