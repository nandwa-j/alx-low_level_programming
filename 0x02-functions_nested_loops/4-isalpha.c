#include "main.h"
/**
 * isalpha - checks for alphabetic character
 * @c: is a character of ASCII CODE
 *
 * Return: 1 if letter is lowercase or uppercase. 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else 
{
return (0);
}
}
