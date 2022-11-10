/**
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

	char *ptr;

	while (s1[i] != '\0')
	i++, len++;

	len = len + n + 1;
	ptr = (char *) malloc(sizeof(char) * len);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	ptr[i] = s1[i];

	for (i = i - 1, j = 0; j < n; j++, i++)
	ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);

}
