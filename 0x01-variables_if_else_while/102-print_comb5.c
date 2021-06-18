#include <stdio.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 *     *     **/
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';

	for (; a <= '9'; a++)
	{
		for (; b <= '9'; b++)
		{
			for (; c <= '9'; c++)
			{
				for (; d <= '9'; d++)
				{
					if ((a < o) || (a == o && b < d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						aputchar(d);
					if (!(a == '9' && b == '8'))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
