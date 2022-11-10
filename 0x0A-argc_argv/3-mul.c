/**
* main - main func
*@argc: count
*@argv: inouts
*
* Return: int
*/

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{

	if (argc > 3 || argc < 3)
	{
	printf("Error\n");
	return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);

}

