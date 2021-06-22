#include "holberton.h"
/**
 * times_table - multiplication tabel
 *
 * Return: return value null
 */

void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar('0' + ((i * j) / 10));
			_putchar('0' + ((i * j) % 10));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
