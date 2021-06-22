#include "holberton.h"
/**
 *  *  *  * main - Entry point
 *   *   *   *
 *    *    *    * Return: Always 0 (Success)
 *     *     *     **/
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
