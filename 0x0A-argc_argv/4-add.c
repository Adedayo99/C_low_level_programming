/**
* main - main func
*@argc: count
*@argv: inputs
*
* Return: int val
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 1)
	printf("0\n");

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
			if (argv[i] != j)
			{
			printf("Error\n");
			return (1);
			}
			}
		}

		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}

		printf("%d\n", sum);
		return (0);
	}
}
