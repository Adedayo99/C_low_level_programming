/**
* _strcmp - comparing string function
*@s1: left input
*@s2: right input
*
* Return: value depending on outcome
*/

#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *my_s1 = s1;
	char *my_s2 = s2;
	int result = 0;


	for (; my_s1[i] && my_s2[i] != '\0'; i++)
	{
		if (my_s1[i] != my_s2[i])
		result = my_s1[i] - my_s2[i];
		break;
	}

	return (result);
	_putchar('\n');
}
