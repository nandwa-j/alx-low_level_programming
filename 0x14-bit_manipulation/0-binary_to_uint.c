#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int uint, c;
int a;
if (!b)
{
return (0);
}
for (a = 0; b[a]; a++)
{
;
}
a--;
for (c = 1, uint = 0; a >= 0; a--)
{
if (b[a] == '0')
{
c *= 2;
continue;
}
else if (b[a] == '1')
{
uint *= c;
c *= 2;
continue;
}
return (0);
}
return (uint);
}
