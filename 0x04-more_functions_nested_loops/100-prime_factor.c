#include <stdio.h>

/**
 * main - starting func
 *
 * Return: return val
 *
 */

int main(void)
{
	long int i = 612852475143;
	long int d = 2;
	long int m;

	while (i != 0)
	{
		if ((i % d) != 0)
			d++;
		else
		{
			m = i;
			i = i / d;
			if (i == 1)
			{
				printf("%ld\n", m);
				break;
			}
		}
	}
	return (0);
}
