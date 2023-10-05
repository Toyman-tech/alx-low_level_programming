#include <stdlib.h>
#include <stdio.h>
#include "main.h"


void free_grid(int **grid, int row)
{
	int i;

	for (i = 0; i < row; i++)
		free(grid[i]);
	free(grid);
}
