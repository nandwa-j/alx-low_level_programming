#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int a;
if (index > 63)
{
return (-1);
}
a = 1 << index;
if (*n & a)
{
*n ^= a;
}
return (1);
}
