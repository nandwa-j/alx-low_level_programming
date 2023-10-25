#include "main.h"
/**
  * wildcmp - compare string 1 and string 2 using wildcard
 * @s1: string 1
 * @s2: string 2
 * Return: return 0 if no match, return 1 if match
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
while (*s2 == '*')
{
s2++;
}
while (*s1 != '\0' && !wildcmp(s1, s2))
{
s1++;
}
return (*s1 != '\0');
}
if (*s1 == *s2 || *s2 == '?')
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
