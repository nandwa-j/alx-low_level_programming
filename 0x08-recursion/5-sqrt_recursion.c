#include "main.h"
/**
 * help - helper function
 * @a: integer
 * @b: increement
 * Return: natural squareroot. -1 if no natural square root found
 */
int help(int a, int b)
{
int square;
square = b * b;
if (square == a)
{
return (b);
}
else if (square < b)
{
return (help(b, a + 1));
}
else
{
return (-1);
}
}
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: integer
 * Return: natural squareroot. -1 if no natural square root found
 */
int _sqrt_recursion(int n)
{
return (help(n, 1));
}

