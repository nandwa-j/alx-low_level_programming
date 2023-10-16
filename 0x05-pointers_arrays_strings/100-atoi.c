#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: char array string
 * Return: an integer
 */
int _atoi(char *s)
{
int a;
int b, p;
b = 0;
p = -1;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == '-')
{
p *= -1;
}
if (s[a] > 47 && s[a] < 58)
{
if (b < 0)
{
b = (b * 10) - (s[a] - '0');
}
else
{
b = (s[a] - '0') * -1;
}
if (s[a + 1] < 48 || s[a + 1] > 57)
{
break;
}
}
}
if (p < 0)
{
b *= -1;
}
return (b);
}
