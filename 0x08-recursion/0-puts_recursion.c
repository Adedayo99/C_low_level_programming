/**
* _puts_recursion - prints string
*@s: pointer to input string
*
* Return: No return val
*/

#include "main.h"

void _puts_recursion(char *s)
{
	char *ptr = s;

	if (*ptr == '\0')
	_putchar('\n');

	else
	{
	_putchar(*ptr);
	_puts_recursion(ptr + 1);
	}

}
