#include "holberton.h"
#include <marh.h>

/**
 * print_number - starting func
 *
 * @n: intiger
 *
 */

void print_number(int n)
{
	unsigned int temp = n;

	if (n < 0)
	{
		temp = -temp;
		_putchar('-');
	}
	if ((temp / 10) > 0)
		print_number(temp / 10);
	_putchar('0' + (temp % 10));
}
