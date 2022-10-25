/**
* _strcpy - copies string
*@dest: output buffer
*@src: input string val
*
* Return: returns char pointer
*/

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	char *cp = dest;

	while (*src != '\0')
	{

	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	
	return (cp);
}
