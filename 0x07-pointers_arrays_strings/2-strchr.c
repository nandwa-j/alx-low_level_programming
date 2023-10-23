#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @C: char type
 * Return: null if character is not found. pointer on first occurence
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else if (*(s + 1) == c)
{
return (s + 1);
}
else 
{
return (0);
}
s++
}
return (s + 1);
}
