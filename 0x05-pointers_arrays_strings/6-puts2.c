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
	int j = 0;
	char *tempo = str;

	while (*tempo)
	{
		i++;
		tempo++;
	}
	while (j <= i)
	{
		if (j % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
		j++;
	}
}
