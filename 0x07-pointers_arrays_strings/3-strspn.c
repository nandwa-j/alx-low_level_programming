#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: char array
 * @accept: char array to check bytes with
 * Return: number of bytes in initial segment 
 */
unsigned int _strspn(char *s, char *accept)
{
int a;
int b;
int c;
a = 0;
c = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if  (s[a] == accept[b])
{
c++;
break;
}
b++;
}
if (accept[a] == '\0')
{
break;
a++;
}
return (c);
}
}