#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to a memory
 * @old_size:  size in bytes for ptr
 * @new_size:  new size in bytes
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
}
if (new_size == old_size)
{
return (ptr);
}
free(ptr);
ptr = malloc(new_size);

return (ptr);
}
