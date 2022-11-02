/**
* _pow_recursion - finds power of number recursively
*@x: base number
*@y: exponent number
*
* Return: int val
*/

#include "main.h"

int _pow_recursion(int x, int y)
{

	int result;

	if (y < 0)
	result = -1;

	if (y == 0)
	result = 1;

	if (y > 0)
	{
		x = x * _pow_recursion(x, y - 1);
		result = x;
	}

	return (result);


