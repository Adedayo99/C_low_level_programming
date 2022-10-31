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
	int i = 0;
	int count1 = 0;
	int count2 = 0;

	char *my_dest = dest;
	char *my_src = src;

	while (*my_dest != '\0')
	{
	my_dest++;
	}


	while (*my_src != '\0')
	{
	*my_dest = *my_src;
	}
	*my_dest = '\0';
	return (my_dest);
	_putchar('\n');
}
