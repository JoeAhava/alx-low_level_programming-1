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
	int j = 0;

	while (*s)
	{
		s++;
	}
	while (s >= 0)
	{
		s[j] = *s;
		s--;
		j++;
	}
}
