/*
*_strncpy - concatenates strings
*@dest: destination var
*@src: source var
*@n: number of bytes
*
* Return: Char pointer
*/

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
	*(dest + i) = *(src + i);
	}

	*dest = '\0';
	return (dest);
}
