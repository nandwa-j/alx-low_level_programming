#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid
 * @height: height of the grid
 * @grid: address of the 2d grid
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
