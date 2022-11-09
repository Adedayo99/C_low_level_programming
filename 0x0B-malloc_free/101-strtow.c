/**
* strtow - spliting strings function
*@str: input string
*
* Return: pointer to 2D array of strings
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
int string_arrange(char *str);

char **strtow(char *str)
{

	char *ptr;
	char **p;
	int i, j;

	if (str == NULL || str == "")
	return (NULL);

	ptr = string_arange(str);

	**p = (char **) malloc(sizeof(char) * 3);

	for (i = 0; i < 3; i++)
	p[i] = (char *) malloc(sizeof(char) * 10);

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 10; i++)
		p[j][i] = ptr[i];
	}

	return (p);
}



int string_arrange(char *str)
{
	int i, len = 0;
	char *ptr;

	while(str[i] != '\0')
	{
	len++, i++;
	}

	ptr = (char *) malloc(sizeof(char) * len);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != " ")
		ptr[i] = str[i];

		if (str[i + 1] == " ")
		ptr[i + 1] = '\0'; 
	}

	return (ptr);
}
