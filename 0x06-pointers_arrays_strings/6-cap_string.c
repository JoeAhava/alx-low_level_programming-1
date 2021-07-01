#include "holberton.h"
/**
 * cap_string - main func
 * @c: char pointer
 * Return: char type
 */

char *cap_string(char *c)
{
	int i = 1;
	int j = 0;
	char a[] = " \t\n,;.!?\"(){}";

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 'a' - 'A';
	while (c[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
			if (c[i - 1] == a[j] && (c[i] >= 'a' && c[i] <= 'z'))
				c[i] -= ('a' - 'A');
		i++;
	}
	return (c);
}
