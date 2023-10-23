#include "main.h"
#include <stddef.h>
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
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
