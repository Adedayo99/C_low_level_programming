/**
* _realloc - reallocates new memory chunk
*@ptr: pointer to old memory
*@old_size: old chunk size
*@new_size: new chunk size
*
* Return: pointer to final chunk
*/

#include <stdlib.h>
#include <stddef.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, j;
	void *mptr;

	if (ptr == NULL || ptr != NULL)
	{
	mptr = malloc(new_size);
	if (mptr == NULL)
	return (NULL);
	}

	if (ptr != NULL && new_size == 0)
	return (NULL);

	if (new_size == old_size)
	return (NULL);

	for (i = 0; i < old_size; i++)
	mptr[i] = ptr[i];

	free(ptr);

	return (mptr);

}

