/**
* more_numbers - function to print more nums
*@void: no input
*
* Return: Always 0 (success)
*/

#include "main.h"

void more_numbers(void)
{

	int i,j;

	i = 0;
	for (i = 0; i <= 10; i++)
{
	for (j = 0; j <= 14; j++)
{
	_putchar(j + '0');
}

}
	_putchar('\n');
}
