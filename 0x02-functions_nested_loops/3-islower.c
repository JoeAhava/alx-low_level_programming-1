#include "holberton.h"
/**
 * _islower - chakes if a letter is lower case
 *
 *@c: intiger value
 *
 * Return: intiger
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
