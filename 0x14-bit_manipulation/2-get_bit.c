#include  "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: type long integer
 * @index: index of a bit
 * Return: value of a bit at index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
{
return (-1);
}
return ((int)((n >> index) & 1));
}
