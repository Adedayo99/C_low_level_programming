/**
* _strspn: compares strings and returns some int
*@s: input string
*@accept: sought string
*
* Return: an unsigned int value
*/

#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	char *ptr = s;
	char *check = accept;
	int i;
	int j;
	int flag = 0;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; check[j] != '\0'; j++)
		{
		if (ptr[i] == check[j])
		flag = 1;

		if (flag == 1)
		break;

		}

		if (flag != 1)
		break;

	}

	return ((unsigned int) i);
}
