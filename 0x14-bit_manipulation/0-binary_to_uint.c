/**
* binary_to_uint - function to convert binary to unsigned int
*@b: pointer to string set of 1s and 0s
*
* Return: output
*/
#include "main.h"
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{

	int i;
	int j;
	unsigned int var = 0;
	int expo = 1;

	if (b == NULL || !b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{

		var += ((int) b[i]) * expo;
	
		expo = expo * 2;
	}

	return (var);

}
