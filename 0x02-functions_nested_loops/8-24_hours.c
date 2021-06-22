#include "holberton.h"

/**
 * jack_bauer - counts time
 *
 * Return: has no return
 */

void jack_bauer(void)
{
	int a = 0;
	int b;

	while (a <= 23)
	{
		b = 0;
		while (b < 60)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
			b++;
		}
		a++;
	}
}
