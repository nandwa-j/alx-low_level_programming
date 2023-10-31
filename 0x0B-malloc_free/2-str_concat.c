#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
char *a;
unsigned int b, c, d, limit;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (b = 0; s1[b] != '\0'; b++)
;
for (c = 0; s2[c] != '\0'; c++)
;
a = malloc(sizeof(char) * (b + c + 1));
if (a == NULL)
{
return (NULL);
}
for (d = 0; s1[d] != '\0'; d++)
{
a[d] = s1[d];
}
for (c = 0; s2[c] != '\0'; c++, d++)
{
a[d] = s2[c];
}
a[d] = '\0';

return (a);
}
