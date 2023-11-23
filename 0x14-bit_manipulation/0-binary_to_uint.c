#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int index, bit;
if (!b)
{
return (0);
}
for (index = 0; b[index]; index++)
{
if (b[index] != '0' && b[index] != '1')
{
return (0);
}
}
index--;
for (bit = 1; index >= 0; index--, bit *= 2)
{
if (b[index] == '1')
{
result += bit;
}
}
return (result);
}
