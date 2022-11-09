/**
* main - main func
*@argc: count
*@argv: inouts
*
* Return: int
*/

#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i, j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	if (i || j == NULL)
	{
	printf("Error\n");
	return (1);
	}

	printf("%d\n", i * j);

	return (0);

}

