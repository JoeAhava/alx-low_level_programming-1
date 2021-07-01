#include "holberton.h"

/**
 * leet - main func
 * @c: char pointer
 * Return: returns char
 */

char *leet(char *c)
{
	int i = 0;
	int j = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
				c[i] = b[j / 2];
		}
	}
	return (c);
}
