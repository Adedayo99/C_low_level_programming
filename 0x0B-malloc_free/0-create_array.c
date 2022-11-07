/**
* create_array - creates array with variable aize
*@size: num of bytes
*@c: initial char
*
*Return: Pointer or NULL
*/

#include "main.h"
#include <stdlib.h>
#include <stddef.h>
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int flag = 0;

	if (size > 0)
	{
	ptr = malloc(sizeof(char) * (int) size);
	ptr[0] = c;
	flag = 1;
	return (ptr);

	}

	if (size == 0)
	return (NULL);
}
