#include "holberton.h"


void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + 1))
		i++;
	j = i / 2;
	if (i % 2)
		j +=1;
	while(j < 1)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
