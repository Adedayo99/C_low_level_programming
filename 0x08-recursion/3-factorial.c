/**
* factorial - returns factorial of num
*@n: input num
*
* Return: int val
*/

#include "main.h"

int factorial(int n)
{

	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	if (n > 0)
	return (n * factorial(n - 1));
}
