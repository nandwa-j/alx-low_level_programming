#include "main.h"
/**
* _strncpy - copy two strings only taking n bytes from src
* @dest: char type
* @src: char type
* @n: number of bytes to use from src
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *temp = dest;
for (; n != 0 && *src != '\0'; n--, src++)
{
*temp = *src;
temp++;
}
for (; n != 0 && *temp != '\0'; n--, temp++)
{
*temp = '\0';
}
return (dest);
}

