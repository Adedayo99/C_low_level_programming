/**
* print_rev - Reversed string printing
*@s: character strinf input
*
*Return: No retun val
*/

#include "main.h"

void print_rev(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	count += 1;
	}

	for (i = count; i >= 0; i--)
	{
	_putchar(s[i]);
	}


	_putchar('\n');
}
