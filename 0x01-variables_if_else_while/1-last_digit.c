#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return Always (0) -success
*/
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = (n % 10);
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	return (0);
}

