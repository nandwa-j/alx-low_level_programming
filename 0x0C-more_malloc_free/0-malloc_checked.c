#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: integer
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
