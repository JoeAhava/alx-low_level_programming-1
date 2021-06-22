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

	while (c < 50)
	{
		printf("%d, %d\n", a, b);
		a = a + b;
		printf("%d, ", a);
		b = b + a;
		printf("%d, ", b);
		c++;
	}
}
