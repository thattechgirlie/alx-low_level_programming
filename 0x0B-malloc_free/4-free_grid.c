#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - check the code
 * @grid: check parameter1
 * @height: check parameter2
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
int a;

for (a = 0; a < height; a++)
{
	free(grid[a]);
}
free(grid);
}
