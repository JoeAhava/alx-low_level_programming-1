#include <stdio.h>

/**
 * main - main
 *
 * Return: retutn
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int c = 0;

	printf("%ld, %ld, ", a, b);
	while (c < 42)
	{
		a = a + b;
		printf("%ld, ", a);
		b = b + a;
		printf("%ld, ", b);
		c++;
	}
	return (0);
}
