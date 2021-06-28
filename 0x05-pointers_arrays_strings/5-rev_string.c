#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - main function
 *
 * @s: pointer of char
 *
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (*s)
	{
		i++;
	}
	while (i <= s)
	{
		s[i] = *s;
		i++;
	}
}
