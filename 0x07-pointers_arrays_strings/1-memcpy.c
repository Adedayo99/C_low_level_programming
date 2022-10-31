/**
* _memcpy - copies mem to mem
*@dest: pointer to destjnation
*@src: pointer to source
*n: num of bytes to copy
*
* Return: poimter to destination
*/

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *my_dest = dest;
	char *my_src = src;

	for (i = 0; i < (int) n; i++)
	{
		my_dest[i] = my_src[i];
	}

	return (my_dest);
	_putchar('\n');
}
