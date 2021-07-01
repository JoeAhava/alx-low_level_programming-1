#include "holberton.h"

/**
 * string_toupper - main function
 * @c: pointer of char
 * Return: char
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] >= 'a') && (c[i] <= 'z'))
			c[i] -= 'a' - 'A';
		i++;
	}
	return (c);
}
