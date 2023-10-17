#include "main.h"
/**
 * rev_string - reverse a string
 * @s: chararray string type
 */
void rev_string(char *s)
{
int a, b;
char d;
for (a = 0; s[a] != '\0'; a++)
{
a++;
}
b = 0;
while (b < a)
{
d = s[b];
s[b] = s[a];
s[a] = d;
b++;
a--;
}
}
