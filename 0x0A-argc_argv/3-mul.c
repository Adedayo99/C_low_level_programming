/**
* main - main func
*@argc: count
*@argv: inouts
*
* Return: int
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
int main(int argc, char *argv[])
{

	(void) argc;
	if (argv[1] || argv[2] == NULL)
	{
	printf("Error\n");
	return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);

}

