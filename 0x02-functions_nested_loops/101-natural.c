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

	while ((n * 3) < 1024 || (n * 5) < 1024)
	{
		sum = sum + (n * 3);
		sum = sum + (n * 5);
		n++;
	}
	printf("%ld", sum);
	return (0);
}
