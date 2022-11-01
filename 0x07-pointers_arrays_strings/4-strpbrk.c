/**
* _strpbrk - checks for substring
*@s: parent string
*@accept: sought daughter string
*
* Return: pointer to substring
*/

#include "main.h"
#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
	char *ptr = s;
	char *check = accept;
	int i;
	int j;
	char *temp_ptr;
	int flag = 0;

	for (i = 0; check[i] != '\0'; i++)
	{
		for (j = 0; ptr[j] != '\0'; j++)
		{
		if (check[i] == ptr[j])
		temp_ptr = &ptr[j];
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
