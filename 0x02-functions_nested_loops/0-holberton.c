#include "holberton.h"

/*
 * This is
 * the main
 * function
*/

int main(void)
{
	char *pout = "Holberton";

	while (*pout)
	{
		_putchar(*pout);
		pout++;
	}
	_putchar('\n');
	return (0);
}
