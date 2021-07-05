#include "holberton.h"

/**
 * _strchr - main func
 * @s: char pointer var
 * @c: char var
 * Return: returns char
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (*s)
	{
		i++;
		s++;
	}
	while (j < i)
	{
		if (s[j] == c)
			return (s);
		else if (s[j + 1] == c)
			return (s + 1);
		j++;
	}
	return (s + 1);
}
