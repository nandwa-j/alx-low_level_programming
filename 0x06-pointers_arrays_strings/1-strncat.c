#include "main.h"
/**
 * _strncat - concatenates two strings only taking n bytes from src
 * @dest: char type
 * @src: char type
 * @n: number of nytes from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *temp = dest;
for (; *temp != '\0'; temp++)
{
;
}
for (; *src != '\0'; src++)
{
if (n == 0)
{
break;
}
*temp = *src;
temp++;
n--;
}
return (dest)
}
