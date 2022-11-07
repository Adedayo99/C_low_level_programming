/**
* create_array - creates array with variable aize
*@size: num of bytes
ii*@c: initial char
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
	int i;

	if (size > 0)
	{
	ptr = (char *) malloc(sizeof(char) * (int) size);

	if (ptr == NULL)
	flag = 0;

	else

	for (i = 0; i < (int) size; i++)
	ptr[i] = c;

	flag = 1;

	}


	if (flag == 1)
	return (ptr);

	else
	return (NULL);


}
