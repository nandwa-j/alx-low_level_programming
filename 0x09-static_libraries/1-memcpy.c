#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: array
 * @dest: array
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest1 = dest;
char *src1 = src;
while (n != 0)
{
*dest1 = *src1;
dest1++;
n--;
src1++;
}
return (dest);
}
