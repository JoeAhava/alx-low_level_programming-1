#include <stdio.h>

/**
 * main - main function
 *
 * Return: return value
 */

int main(void)
{
	int n = 0;
	long int sum = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			sum = sum + n;
		n++;
	}
	printf("%ld", sum);
	return (0);
}
