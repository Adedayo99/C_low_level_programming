/**
* main - mother function
*@argc: input count
*@argv: pointersbto inputs
*
* Return: int result
*/
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int result = 0;
	int (*func) (int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	
	if ((*argv[2] == '/' && *argv[3] == 0) || (*argv[2] == '%' && *argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	func  = get_op_func(op);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = (*func) (num1, num2);
	printf("%d\n", result);

	return (0);

}
