#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialize with a specific bar
 * @c: char
 * @size: size of array
 * Return: pointer to the array. NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b;
if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(*a));
if (a == NULL)
{
return (NULL);
}
for (b = 0; b < size; b++)
{
a[b] = c;
}
return (a);
}
