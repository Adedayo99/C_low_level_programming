/**
* str_concat - concat strings
*@s1: first string
*@s2: second string
*
* Return: pointer to s1
*/

#include "main.h"
#include "stdlib.h"
#include "stddef.h"

int len_check(char *str);

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int flag = 0;

	int len, len1, len2;
	char *ptr_arr;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	if (s1 && s2 != NULL)
	{
	flag = 1;
	len1 = len_check(s1);
	len2 = len_check(s2);

	len = len1 + len2 + 1;
	ptr_arr = (char *) malloc(sizeof(char) * len);
	if (ptr_arr == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	ptr_arr[i] = s1[i];

	while (s2[j] != '\0')
	{
	ptr_arr[i] = s2[j];
	i++, j++;
	}
	ptr_arr[i] = '\0';
	}

	if (flag == 1)
	return (ptr_arr);

	else
	return (NULL);



}


int len_check(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	;

	return (len);
}
