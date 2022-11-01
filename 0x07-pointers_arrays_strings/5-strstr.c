/**
* _strstr - checks for substring
*@haystack: parent string
*@needle: sought daughter string
*
* Return: pointer to substring
*/

#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *ptr = haystack;
	char *check = needle;
	int i;
	int j;
	char *temp_ptr;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; check[j] != '\0'; j++)
		{
		if (ptr[i] == check[j])
		temp_ptr = &ptr[i];
		flag = 1;
		}

		if (flag == 1)
		break;

	}

	return (temp_ptr);
	_putchar('\n');
}

