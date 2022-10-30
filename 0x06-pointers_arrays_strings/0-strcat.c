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

	char* my_dest = dest;
	char* my_src = src;


	while (*my_dest != '\0')
	{
	count1++;
	my_dest++;
	}

	while (*my_src != '\0')
	{
	count2++;
	my_src++;
	}


	for (; i <= count2; i++, count1++)
	{
	*(my_dest + count1) = *(my_src + i);
	}
	*my_dest = '\0';
	return (my_dest);
	_putchar('\n');
}
