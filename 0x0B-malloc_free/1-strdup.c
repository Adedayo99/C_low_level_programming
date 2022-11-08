/**
* _strdup - duplicates a string
*@str: input string
*
* Return: char pointer
*/

#include "main.h"
#include "stdlib.h"

char *_strdup(char *str)
{
	int i = 0;
	char *ptr1 = str;
	char *ptr_arr;
	int len = 0;
	int flag = 0;

	while (ptr1[i] != '\0')
	{
	len++;
	i++;
	}

	if (ptr1 == NULL)
	flag = 0;

	else
	ptr_arr = (char *) malloc(sizeof(char) * (len + 1));

	if (ptr_arr == NULL)
	flag = 0;

	else
	for (i = 0; i < len; i++)
	{

	ptr_arr[i] = ptr1[i];
	flag = 1;
	}




	if (flag == 1)
	return (ptr_arr);

	else
	return (NULL);

}
