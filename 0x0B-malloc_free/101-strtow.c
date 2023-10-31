#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
if (grid != NULL)
{
unsigned int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
char **aout;
unsigned int c, height, i, j, a1;
if (str == NULL || *str == '\0')
return (NULL);

for (c = height = 0; str[c] != '\0'; c++)
{
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
height++;
}
aout = malloc((height + 1) * sizeof(char *));
if (aout == NULL)
{
return (NULL);
}

for (i = a1 = 0; i < height; i++)
{
while (str[a1] == ' ')
{
a1++;
}
for (c = a1; str[c] != '\0'; c++)
{
if (str[c] == ' ')
{
break;
}
}
aout[i] = malloc((c - a1 + 1) * sizeof(char));
if (aout[i] == NULL)
{
ch_free_grid(aout, i);
return (NULL);
}
for (j = 0; a1 < c; a1++, j++)
{
aout[i][j] = str[a1];
}
aout[i][j] = '\0';
}
aout[i] = NULL;
return (aout);
}
