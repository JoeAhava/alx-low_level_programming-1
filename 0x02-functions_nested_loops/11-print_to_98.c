#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers
 *
 * @n: intiger value
 *
 * Return: no return
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	while (n < 98 || n > 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
			printf("\n")
		}
		else if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
}
