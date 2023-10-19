#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string.
 * Return: s
 */

char *rot13(char *s)
{
int count = 0, b;
while (*(s + count) != '\0')
{
for (b = 0; b < 52; i++)
{
char x[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char aA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
if (*(s + count) == aA[i])
{
*(s + count) = x[i];
break;
}
}
count++;
}
return (s);
}

