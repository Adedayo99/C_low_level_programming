/**
* print_square - prints square with #
*@size: input for square dims
*
* Return: None
*/

#include "main.h"

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		_putchar(35);
		}
		_putchar('\n');

	}
}
