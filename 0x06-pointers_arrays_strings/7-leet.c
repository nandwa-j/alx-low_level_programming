#include "main.h"
/**
 * leet - encode a string into 1337
 * @a: string
 * Return: a
 */
char *leet(char *a)
{
int i, x;
char check[] = "aAeEoOtTlL";
char change[] = "4433007711";
for (i = 0; *(a + i) != '\0'; i++)
{
for (x = 0; check[x]; x++)
if (check[x] == *(a + i))
{
*(a + i) = change[x];
break;
}
}
return (a);
}
