/**
* malloc_checked - dynamic memory allocator
*@b: num of blocks to allocate
*
* Return: non
*/

#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	return (98);

	else
	return (ptr);

}
