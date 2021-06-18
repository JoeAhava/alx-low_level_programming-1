#include <stdio.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 *     *     **/
int main(void)
{
	int a = '0';
	int b = '1';

	for (; a <= '9'; a++)
	{
		for (; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else if (b == 9)
				b = a + '1';
		}
	}
	putchar(10);
	return (0);
}
