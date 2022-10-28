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

	char *return_ptr = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';
	return (return_ptr);
}
