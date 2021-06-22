#include "holberton.h"

/**
 * jack_bauer - counts time
 *
 * Return: has no return
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (a <= 23)
	{
		b = 0;
		while (b <= 60)
		{
			_putchar(a ':' b '\n');
			b++;
		}
		a++;
	}
}
