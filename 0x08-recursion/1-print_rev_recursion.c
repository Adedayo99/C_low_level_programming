/**
* _print_rev_recursion - printjng in reverse
*@s: input array pointer
*
* Return: No val
*/

#include "main.h"

void _print_rev_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
	_print_rev_recursion(ptr + 1);

	_putchar(*ptr);
	}


}

	


