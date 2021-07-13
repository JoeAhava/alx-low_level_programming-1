#include "holberton.h"

/**
 * create_array - main func
 * @size: int var
 * @c: cahr car
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *an;
	unsigned int i;

	if (size > 0)
	{
		an = malloc(size * sizeof(c));
		if (p == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
