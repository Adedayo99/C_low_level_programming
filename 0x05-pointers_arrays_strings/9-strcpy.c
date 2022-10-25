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
	char *cp;

	*cp = *src;
	*dest = *cp;

	return (*dest);
}
