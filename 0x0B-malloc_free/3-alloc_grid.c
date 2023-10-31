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
if (width < 1 || height < 1)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
grid[a] = (int *)malloc(width * sizeof(int));
if (grid[a] == NULL)
{
int i;
for (i = 0; i < a; i++)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
for (b = 0; b < width; b++)
{
grid[a][b] = 0;
}
}
return (grid);
}
