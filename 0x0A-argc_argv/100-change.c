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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	if (atoi(*argv[1]) < 0)
	{
		printf("0\n");
	}

	

