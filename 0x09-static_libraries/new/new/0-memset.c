#include "holberton.h"

/**
 * _memset - main function
 * @s: char pointer var
 * @b: char var
 * @n: int var
 * Return: char return
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
