#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
a--;
}
while (a >= 0)
{
_putchar(s[a]);
a--;
}
_putchar('\n');
}
