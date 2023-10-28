#include "main.h"
/**
 * _memset - function that fills memory with a constant type
 * @n: bytes of memory
 * @b: constant type
 * @s: buffer array
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int a;
a = 0;
while (n > 0)
{
s[a] = b;
a++;
n--;
}
return (s);
}
