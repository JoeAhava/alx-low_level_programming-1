#include "holberton.h"

/**
 * reverse_array - main function
 * @a: pointer of int
 * @n:int variable
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
		i++;
	}
	printf("\n");
}
