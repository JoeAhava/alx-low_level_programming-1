#include "holberton.h"

int main(void)
{
	char *pout= "Holberton";

	while(*pout)
	{
		_putchar(*pout);
		pout++;
	}
	_putchar('\n');
	return (0);
}
