#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: to the begining of the loacted substring. null if not found
 */
char *_strstr(char *haystack, char *needle)
{
int a = 0, b;
if (needle[0] == '\0')
{
return (haystack);
}
while (haystack[a] != '\0')
{
b = 0;
while (needle[a + b] != needle[b])
{
if (haystack[b + 1] == '\0')
{
return (haystack + a);
}
b++;
}
a++;
}
return (NULL);
}
