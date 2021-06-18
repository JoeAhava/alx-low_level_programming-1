#include <stdio.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 *     *     **/
int main(void)
{
	int n = '0';
	int m;
	int o;
	int p;

	for (; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (o = '0'; o <= '9'; o++)
			{
				for (p = '0'; p <= '9'; p++)
				{
					if ((n < o) || (n == o && m < p))
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(o);
						aputchar(p);
					if (!(n == '9' && m == '8'))
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
