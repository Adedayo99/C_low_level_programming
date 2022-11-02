/**
* _strlen_recursion - returns length of string
*@s: input string
*
* Return: an int val
*/

#include "main.h"

int _strlen_recursion(char *s)
{
	char *ptr = s;
	int i = 1;

	if (*ptr != '\0')
	{
	i = (i + _strlen_recursion(ptr + 1));
	i--;
	}

	return (i);
	_putchar('\n');
}
