/**
* str_concat - concat strings
*@s1: first string
*@s2: second string
*
* Return: pointer to s1
*/

#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *ptr1 = s1;
	char *ptr2 = s2;
	int i = 0;
	int j;
	flag = 0;
	int len;
	char *ptr_arr;

	if (ptr1 && ptr2 != NULL)
{
	flag = 1;
	for (i = 0; ptr1[i] != '\0'; i++)
	;

	for (j = 0; ptr2[j] != '\0'; j++)
	;

	len = i + j + 2;
	ptr_arr = (char *) malloc(sizeof(char) * len);

	for (i = 0, j = 0;  ptr1[j] != '\0'; i++, j++)
	{
		ptr_arr[i] = ptr1[j];
	}

	for (i = i + 1, j = 0; ptr2[j] != '\0'; i++, j++)
	ptr_arr[i] = ptr2[j];


	ptr_arr[i] = '\0';

}
	if (flag == 1)
	return (ptr1);

	else
	return (NULL);



	}
