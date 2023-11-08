#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @size: size of array
 * @action: pointer to a function
 * @array: input integer
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action && size)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
