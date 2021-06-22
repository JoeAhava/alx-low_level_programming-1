#include "holberton.h"
/**
 * _islower - chakes if a letter is lower case
 *
 * Returnes: intiger
 *
 */

int _islower(int c)
{
	if (c == 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
