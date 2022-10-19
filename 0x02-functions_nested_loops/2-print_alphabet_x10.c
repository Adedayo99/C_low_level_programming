/**
* print_alphabet_x10 - prints the alphabet 10 times
*
* Return: On success void.
* on error, no return.
*/
#include "main.h"

void print_alphabet_x10(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
{

	j = 'a';
	while (j <= 'z')
{
	_putchar(j);
	j++;

}
	_putchar('\n');
	i++;

}

}
