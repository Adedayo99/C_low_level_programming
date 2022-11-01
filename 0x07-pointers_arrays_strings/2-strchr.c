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
	int j;
	char *ptr = s;
	int flag = 0;
	char *temp_ptr;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; ptr[j] != '\0'; j++)
		;

		if (c == '\0')
		{
		temp_ptr = &ptr[j + 1];
		}


		if (ptr[i] == c)
		{
		temp_ptr = &ptr[i];
		flag = 1;
		}

		if (flag == 1)
		break;
	}

	if (flag == 0)
	temp_ptr = NULL;

	return (temp_ptr);
	_putchar('\n');

}
