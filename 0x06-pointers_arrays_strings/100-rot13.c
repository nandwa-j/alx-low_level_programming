#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string.
 * Return: s
 */

char *rot13(char *s)
{
int count = 0, b;
char aA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + count) != '\0')
{
for (b = 0; b < 52; i++)
{
if (*(s + count) == aA[i])
{
*(s + count) = rot13[i];
break;
}
}
count++;
}
return (s);
}

