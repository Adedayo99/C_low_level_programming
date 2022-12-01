/**
* get_bit - func to retrieve bit at an index
*@n: input
*@index: index of interest
*
* Return: bit obtained
*/
#include "main.h"
#include <stdlib.h>

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	int seek;

	if (n == NULL)
	return (-1);

	while (n[i] != '\0')
	{
		if (i == (int) index)
		seek = n[i];

		i++;
	}

	return (seek);
}
