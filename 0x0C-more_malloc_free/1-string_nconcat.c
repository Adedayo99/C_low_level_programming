i/**
* string_nconcat - concatenates strings
*@s1: first string
*@s2: second string
*@n: num of bytes to use
*
* Return: pointer to concat
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len = 0;
	int len2 = 0;

	char *ptr;

	while (s1[i] != '\0')
	i++, len++;
	i = 0;

	while (s2[j] != '\0')
	j++, len2++;

	len = len + n + 1;
	ptr = (char *) malloc(sizeof(char) * len);

	if (ptr == NULL)
	return (NULL);

	if (s1 != NULL || s[i] != "")
	{
	for (i = 0; s1[i] != '\0'; i++)
	ptr[i] = s1[i];
	}

	if ((int) n >= len2)
	n = len2;

	if (s2 != NULL || s2[j] != "")
	{
	for (i = i, j = 0; j < (int) n; j++, i++)
	ptr[i] = s2[j];
	flag = 1;
	}
	if (flag == 1)
	ptr[i] = '\0';

	return (ptr);

}
