#include "holberton"
/**
 * more_numbers - starting function
 *
 */
void more_numbers(void)
{
	for (int i = 0; i < 15; i++)
	{
		i = i * 10;
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
	_putchar('\n');
}
