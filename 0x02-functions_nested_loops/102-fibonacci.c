#include <stdio.h>

/**
 * main - main func
 *
 * Return: value
 *
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;

	printf("%d, %d\n", a, b);
	while (c < 50)
	{
		a = a + b;
		printf("%d, ", a);
		b = b + a;
		printf("%d, ", b);
		c++;
	}
	return (0);
}
