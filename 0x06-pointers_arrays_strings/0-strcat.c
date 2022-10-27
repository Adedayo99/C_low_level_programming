/**
* _strcat - concatenates strings
*@dest: destination var
*@src: source var
*
* Return: Char pointer
*/

#include "main.h"

char *_strcat(char *dest, char *src);
{
	int i = 0;
	int count1 = 0;
	int count2 = 0;

	while (*dest != '\0')
	{
	count1++;
	}

	while (*src != '\0')
	{
	count2++;
	}


	for (i = 0; i<= count2; i++, count1++)
	{
	*(dest + count1) = *(src + i);
	}

	return (dest);
	_putchar('\n');
}
