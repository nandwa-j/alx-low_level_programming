#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of byte
 * Return: pointer to the allocated memory
 * calloc returns NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
memset(p, 0, nmemb * size);
return (p);
}
