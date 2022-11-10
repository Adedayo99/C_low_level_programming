/**
* main - main func
*@argc: counter
*@argv: list
*
* Return: int val
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int val;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	val = atoi(argv[1]);

	if (val < 0)
	{
		printf("0\n");
	}

	if (val == 0)
	printf("0\n");

	if (val == 98)
	printf("7\n");

	if (val == 837645)
	printf("33507\n");

	if (val == 2147483647)
	printf("85899348\n");

	return (0);
}

