#include "holberton.h"

/**
 * rot13 - main function
 * @c: char pointer
 * Return: char type
 */

char *rot13(char *c)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; c[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (c);
}
