/**
* free_grid - free allocated memory
*@grid: pointer to 2D array
*@height: height of the grid
*
* Return: No return val
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
void free_grid(int **grid, int height)
{

	int i;
	int **mgrid = grid;

	if (mgrid != NULL)
	for (i = 0; i < height; i++)
	free(mgrid[i]);

	free(mgrid);
}
