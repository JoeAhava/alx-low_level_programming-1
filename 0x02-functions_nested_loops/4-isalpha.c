#include "holberton.h"
/**
 * _isalpha - chakes if it is a letter or not
 *
 * @c: an int alue
 *
 * Return: Returns an answer
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
