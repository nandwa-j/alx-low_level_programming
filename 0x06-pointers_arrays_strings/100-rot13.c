#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string.
 * Return: s
 */

char *rot13(char *s)
{
int count = 0, b;
char x[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char aA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (*(s + count) != '\0')
{
for (b = 0; b < 52; b++)
{

if (*(s + count) == aA[b])
{
*(s + count) = x[b];
break;
}
}
count++;
}
return (s);
}

