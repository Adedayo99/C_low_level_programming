/**
* _strncpy - concatenates strings
*@dest: destination var
*@src: source var
*@n: number of bytes
*
* Return: Char pointer
*/

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	char *ptr1 = src;
	char *ptr2 = dest;

	if ( n < (int) (sizeof(src)))
	{
		for (i = 0; i < n; i++)
		{
		ptr2[i] = ptr1[i];
		}
	}

	if (n >= (int) (sizeof(src)))
	{
		for (i = 0; i < (int) (sizeof(src)); i++)
		{
		ptr2[i] = ptr1[i];
		}

		for (i = i + 1; (int) sizeof(src) < i <= n; i++)
		{
		ptr2[i] = '\0';
		}



	}

	return (ptr2);
	_putchar('\n');
}
