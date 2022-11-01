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
	int flag = 0;

	for (i = 0; check[i] != '\0'; i++)
	{
		for (j = 0; ptr[j] != '\0';)
		{
		if (check[i] == ptr[j])
		temp_ptr = &ptr[j];
		flag = 1;
		}

		if (flag == 1)
		break;

	}

	return (temp_ptr);
	_putchar('\n');
}

