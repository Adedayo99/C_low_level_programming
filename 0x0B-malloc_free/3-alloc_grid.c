/**
* alloc_grid - initializes 2D array
*@width: col num
*@height: row num
*
* Return: pointer ti array in heap
*/
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int **alloc_grid(int width, int height)
{

	int **ptr;
	int flag;
	int i, j;

	if (width && height > 0)
	{
	flag = 1;

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
	return (NULL);


	else
	{

	for (i = 0; i < height; i++)
	{
	ptr[i] = (int *) malloc(sizeof(int) * width);
	if (ptr[i] == NULL)
	break;
	}

		for (i = 0; i < height; i++)
		{
		for (j = 0; j < width; j++)
		ptr[i][j] = 0;
		}
	}

	}

	if (flag == 1)
	return (ptr);

	else
	return (NULL);
}
