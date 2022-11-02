/**
* is_palindrome - checks for desired pattern
*@s: input string
*
* Return: int val
*/

#include "main.h"
int checker(char *s, int len);
int is_palindrome(char *s)
{
	char *ptr = s;
	int len;
	int val;

	len = _strlen_recursion(ptr);
	val = checker(ptr, len);

	return (val);
}






int _strlen_recursion(char *s)
{
	char *ptr = s;
	int i = 0;

	if (*ptr != '\0')
	{
	i++;
	i = (i + _strlen_recursion(ptr + 1));
	}


	return (i);
	_putchar('\n');
}


int checker(char *s, int len)
{
	char *pt = s;
	int i;
	int result = 1;

	for (i = 0; i < len / 2; i++)
	{
	if (pt[i] != pt[len - i])
	result = 0;
	break;
	}


	return (result);
}



