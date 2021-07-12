#include <stdio.h>

/**
 * main - main function
 * @argc: numof arg
 * @argv: value of arg
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", --argc);
	return (0);
}
