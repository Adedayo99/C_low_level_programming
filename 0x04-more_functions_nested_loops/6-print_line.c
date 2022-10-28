/**
* print_line - prints line to terminal
*@n: input number for lines
*
* Return: none
*/

#include "main.h"

void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	_putchar('_');
	}

	_putchar('\n');

}	
