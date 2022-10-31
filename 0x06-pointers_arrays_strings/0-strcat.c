/**
* _strcat - concatenates strings
*@dest: destination var
*@src: source var
*
* Return: Char pointer
*/

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	char *my_dest = dest;
	char *my_src = src;

	for (i = 0; my_dest[i] != '\0'; i++);

	for (j = 0; my_src[i] != '\0'; j++) 
	{
	my_dest[i + j] = my_src[j];
	}
	my_dest[i + j] = '\0';

	return (my_dest);
	_putchar('\n');
}
