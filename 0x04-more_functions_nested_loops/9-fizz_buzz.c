#include <stdio.h>
/**
 *main - entry point
 *
 *Return:1- success
 *
 *Description:prints 1-100 except mult. of 3 and 5
 *
 */

#include "main.h"

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		printf("Fizz ");

		else if (i % 5 == 0)
		printf("Buzz ");

		else if ((i % 3 == 0) && (i % 5 == 0))
		printf("FizzBuzz ");

		else
		printf("%d ", i);

	}

	printf("\n");
}
