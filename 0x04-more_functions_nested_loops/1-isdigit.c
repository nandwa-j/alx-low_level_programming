#include "main.h"
/**
 * int _isdigit - checks for a digit
 * @c: type int number
 * Return: 1 if a digit. 0 otherwise
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
