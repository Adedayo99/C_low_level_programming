/**
* _puts - prints string to screen
*@str: string input to function
*
*Return: No return value
*/

#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
