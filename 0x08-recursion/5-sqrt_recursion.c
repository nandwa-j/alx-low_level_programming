#include "main.h"
/**
 * help - helper function
 * @a: integer
 * @b: increement
 * Return: natural squareroot. -1 if no natural square root found
 */
int help(int a, int b)
{
if (b * b == a)
{
return (b);
}
if (b * b > a)
{
return (-1);
}
return (help(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: integer
 * Return: natural squareroot. -1 if no natural square root found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (help(n, 1));
}

