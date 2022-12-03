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
	int  var = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '1')
		var = (var << 1) | 1;

		if (b[i] == '0')
		var = (var << 1);

		else
		return (0);

		i++
	}
	

	return ((unsigned int) var);

}
