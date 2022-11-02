/**
* factorial - returns factorial of num
*@n: input num
*
* Return: int val
*/

#include "main.h"

int factorial(int n)
{
	int result;

	if (n < 0)
	result = -1;

	if (n == 0)
	result = 1;

	if (n > 0)
	result =  (n * factorial(n - 1));

	return (result);
}
