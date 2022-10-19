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
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
