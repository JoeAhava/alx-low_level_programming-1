#include "holberton.h"

/**
 * print_to_98 - prints numbers
 *
 * @n: intiger value
 *
 * Return: no return
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 10)
			_putchar('0' + (n % 10));
		else
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 98)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
