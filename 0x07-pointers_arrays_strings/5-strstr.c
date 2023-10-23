#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: to the begining of the loacted substring. null if not found
 */
char *_strstr(char *haystack, char *needle);
{
int a, b, c;
i = 0;
c = 0;
while (haystack[a] != '\0')
b = 0;
while (needle[b + c] != 0 '\0' && haystack[a + c] !='\0' && needle[b + c] == haystack[i + c])
{
if (haystack[a + c] != needle[b + c])
break;
c++;
}
if (needle[b + c] == '\0')
{
return (&haystacke[a]);
a++
b++;
}
return (null);
}
