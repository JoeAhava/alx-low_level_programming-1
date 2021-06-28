#include "holberton.h"

/**
 * puts2 - main function
 *
 * @str: pointer of a char
 *
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (i % 2 == 0)
	{
		_putchar(*str);
		str++;
	}
}
