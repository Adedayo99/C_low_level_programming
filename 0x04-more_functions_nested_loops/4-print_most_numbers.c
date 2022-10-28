/**
* print_most_numbers - prints some nums
*@void: no input
*
* Return: Always 0 (success)
*/

#include "main.h"

void print_most_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
{
	if ((i == '2') || (i == '4'))
	;

	else
	_putchar(i);

	i++;
}
	_putchar('\n');
}
