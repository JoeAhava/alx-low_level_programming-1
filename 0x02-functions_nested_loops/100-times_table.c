#include "holberton.h"

void print_times_table(int n)
{
	int i = 0;
	int j;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (((i * j) / 10) > 0)
			                                _putchar('0' + ((i * j) / 10));
			                        else if (j > 0)
			                                _putchar(' ');
			
			                        _putchar('0' + ((i * j) % 10));
			                        if (j < 9)
			                        {
						                                _putchar(',');
						                                _putchar(' ');
						                        }
			                        j++;
			                }
	                _putchar('\n');
	                i++;
	        }
}
