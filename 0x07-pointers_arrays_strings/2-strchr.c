/**
* _strchr - searches for char 
*@s: pointer to recieve string
*@c: char being sought for
*
* Return: pointer to first occurence od char or null
*/

#include "main.h"
#include <stddef.h>
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = s;


	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == c)
		ptr = ptr + i;
	}
	
	if (ptr != ptr + i)
	ptr = NULL;

	return (ptr);
	_putchar('\n');

}
