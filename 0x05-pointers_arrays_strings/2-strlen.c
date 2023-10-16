#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: char type
 * Return: length of string
 */
int _strlen(char *s)
{
int a;
a = 0;
while (*s != '\0')
{
s++;
a++;
}
return (a);
}
