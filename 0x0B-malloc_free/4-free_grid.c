#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created by alloc_grid function.
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
int l;
if (grid == NULL || height <= 0)
return;
for (l = 0; l < height; l++)
free(grid[l]);
free(grid);
}
