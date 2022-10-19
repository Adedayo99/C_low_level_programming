/**
*print_sign - checks the sign of a number
*@n: the number whole sign is checked
*
*Return: Always 0 (success)
*/

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
{
	return (1);
	_putchar(43);
}

	if (n == 0)
{
	return (0);
	_putchar(48);
}

	if (n < 0)
{
	return (-1);
	_putchar(45);
}

}}
