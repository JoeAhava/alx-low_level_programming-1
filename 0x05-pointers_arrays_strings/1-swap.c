#include "holberton.h"

/**
 * swap_int - main function
 *
 * @a: pointer of an intiger
 *
 * @b: pointer of an intiger
 *
 * Return: nothin
 *
 */

void swap_int(int *a, int *b)
{
	int tempo;

	tempo = *a;
	*b = *a;
	*a = tempo;
}
