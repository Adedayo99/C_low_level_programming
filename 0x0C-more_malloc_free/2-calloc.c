/**
* _calloc - memory allocator
*@nmemb: element nun
*@size: size of one block
*
* Return: pointer to array
*/
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *ptr;
	nmemb = (int) nmemb;
	size = (int) size;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr =  malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < (int) nmemb; i++)
	ptr[i] = 0;

	return ((void *) ptr);

}


