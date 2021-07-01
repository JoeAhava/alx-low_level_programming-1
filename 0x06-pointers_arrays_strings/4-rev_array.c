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
	int j = 0;

	n--;
	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
