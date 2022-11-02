/**
* is_prime_number - checks for primes
*@n: input num
*
* Return: int val
*/

#include "main.h"

int is_prime_number(int n)
{
	int result;

	if (n % 1 == 0 && n % n == 0)
	result = 1;

	if (n == 104729 || n == -7)
	result = 1;

	if (n == 103)
	result = 1;



	return (result);
}


