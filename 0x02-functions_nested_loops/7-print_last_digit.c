#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @a: intiger value of function
 *
 * Return: return type of a funtion
 */

int print_last_digit(int a)
{
	if ((a % 10) >= 0)
	{
		_putchar('0' + (a % 10));
		return (a % 10);
	}
	else
	{
		_putchar('0' + (-1 * (a % 10)));
		return ((-1 * (a % 10)));
	}
}
