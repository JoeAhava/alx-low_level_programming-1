#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		int ln;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		ln = n % 10;
		if (ln > 5)
			printf("Last digit of %d is %d\n", n, ln);
		else if (ln == 0)
			printf("Last digit of %d is %d\n", n, ln);
		else if (ln > 0 && ln < 6)
			printf("Last digit of %d is %d\n", n, ln);
		else
			printf("error");
		return (0);
}
