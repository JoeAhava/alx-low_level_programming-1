#include "holberton.h"

/**
 * puts_half - main function
 *
 * @str: pointer of char
 *
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	char *tmp = str;

	while (*str)
	{
		i++;
		j++;
		str++;
	}
	while (i >= 0)
	{
		tmp = *str;
		i--;
		str--;
	}
	i = j / 2;
	while (i >= 0)
	{
		tmp++;
		i--;
	}
	i = j / 2;
	while (i > 0)
	{
		_putchar(*tmp);
		i--;
	}
}
