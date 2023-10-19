#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @a: string
 * Return: 0
 */
char *cap_string(char *a)
{
int b, c;
int y;
char sep[] = ",;.!?"(){} \n\t";
for (b = 0, y = 0; a[b] != '\0'; b++)
{
if (a[0] > 96 && a[0] < 123)
{
y = 1;
}
for (c = 0; sep[c] != '\0'; c++)
{
if (sep[c] == a[b])
{
y = 1;
}
if (y)
{
if (a[b] > 96 && a[b] < 123)
{
a[b] -= 32;
y = 0;
}
else if (a[b] > 64 && a[b] < 91)
{
y = 0;
}
else if (a[b] > 47 && a[b] < 58)
{
y = 0;
}
}
}
return (a);
}
