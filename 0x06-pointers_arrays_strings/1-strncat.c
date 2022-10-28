
/**
* _strncat - concatenates strings
*@dest: destination var
*@src: source var
*@n: number of bytes
*
* Return: Char pointer
*/

#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count1 = 0;
	int count2 = 0;

	while (*dest != '\0')
	{
	count1++;
	dest++;
	}

	while (*src != '\0')
	{
	count2++;
	src++;
	}

	for (; i <= n; i++, count1++)
	{
	*(dest + count1) = *(src + i);
	}
	*dest = '\0';

	return (dest);
	_putchar('\n');
}



