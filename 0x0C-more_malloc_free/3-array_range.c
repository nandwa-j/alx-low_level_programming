#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 * return NULL if min > max  and if malloc fails
 */
int *array_range(int min, int max)
{
int *p;
int i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
p = malloc(sizeof(*p) * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++, min++)
{
p[i] = min;
}
return (p);
}
