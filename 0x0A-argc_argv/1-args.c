#include <stdio.h>

/**
 * main - main function
 * @argc: numof arg
 * @argv: value of arg
 * Return: int
 */

int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	(void) argc;
	return (0);
}