#include <holberton.h>

void print_alphabet(void);

/**
 *  *  *  * main - Entry point
 *   *   *   *
 *    *    *    * Return: Always 0 (Success)
 *     *     *     **/
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}
}
