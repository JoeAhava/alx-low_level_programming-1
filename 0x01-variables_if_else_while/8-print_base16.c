#include <stdio.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 *     *     **/
int main(void)
{
	char n = '0';
	char s = 'a';

	for (; n <= '9' || s <= 'f'; n++)
	{
		if (n <= '9')
			putchar(n);
		else
		{
			putchar(s);
			s++;
		}
	}
	putchar(10);
	return (0);
}
