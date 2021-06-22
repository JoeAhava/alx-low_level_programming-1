#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 0)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
