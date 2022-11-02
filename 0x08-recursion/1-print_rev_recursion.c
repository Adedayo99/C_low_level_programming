/**
* _print_rev_recursion - printjng in reverse
*@s: input array pointer
*
* Return: No val
*/

#include "main.h"

void print_rev_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	print_rev_recursion(ptr + 1);
	
	_putchar(*ptr);
} 

	


