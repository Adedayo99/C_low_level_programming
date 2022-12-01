/**
* binary_to_uint - function to convert binary to unsigned int
*@b: pointer to string set of 1s and 0s
*
* Return: output
*/
#include "main.h"
#include <stdlib.h>
#include <math.h>

unsigned int binary_to_uint(const char *b)
{

	int i;
	unsigned int var = 0;

	if (b == NULL || !b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		var += atoi(&b[i]) * (pow(2, i));
	}

	return (var);

}
