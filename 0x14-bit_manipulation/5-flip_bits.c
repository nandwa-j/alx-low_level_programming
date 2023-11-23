#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need to flip to get
 * @n: type unsigned long integer
 * @m: type unsigned long integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int a;
for (a = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
{
a++;
}
}
return (a);
}
