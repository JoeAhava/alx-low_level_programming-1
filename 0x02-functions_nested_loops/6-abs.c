#include "holberton.h"
/**
 * _abs - checks the absolute value
 *
 *@a: intiger value
 *
 * Return: returns the value of _abs
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
