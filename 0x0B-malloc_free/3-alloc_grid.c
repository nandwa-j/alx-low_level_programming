#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d integer grid
 * @width: int size
 * @height: int size
 * Return: pointer to new grid
 */
int **alloc_grid(int width, int height)
{
int **grid;
int a, b;
if (width + height < 2 || width < 1 || height < 1)
{
return (NULL);
}
grid = malloc(height * sizeof(*grid);
if (grid == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
grid[a] = malloc(width * sizeof(**grid));
if (grid[a] == NULL)
{
for (a--; a >= 0; a--)
{
free(grid[a]);
free(grid);
}
return (NULL);
}
for (b = 0; b < width; b++)
grid[a][b] = 0;
}
return (grid);
}
