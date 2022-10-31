
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
	int i;
	int j;
	char *my_dest = dest;
	char *my_src = src;


	for (i = 0; my_dest[i] != '\0'; i++)
	;

	if (i != 0)
{
	if (((int) sizeof(my_src)) < n)
	{
		for (j = 0; j <= n; j++)
		{
		my_dest[i + j] = my_src[j];
		}
		my_dest[i + j] = '\0';
	}

	else
	{
		for (j = 0; j < n; j++)
		my_dest[i + j] = my_src[j];
	}

	return (my_dest);
}
	_putchar('\n');
}



