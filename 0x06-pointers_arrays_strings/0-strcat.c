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
	int count = 0;

	while (*dest != '\0')
	{
	count++;
	}

	for (i = 0; *src != '\0'; i++, count++)
	{
	*(dest + count) = *(src + i);
	}

	*dest = '\0';
	return (dest);
	_putchar('\n');
}
