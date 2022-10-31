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
	my_dest = dest;
	return (my_dest);
	_putchar('\n');
}
