#include "main.h"
/**
  * help - helps prime function
 * @n: number to be checked
 * @x: checks if n is divisible by x
 * Return: 0 if not prime, 1 if prime
 */

int help(int n, int x)
{
if (x * x > n)
{
return (1);
}
if (n % x == 0)
{
return (0);
}
return (help(n, x + 1));
}
/**
 * is_prime_number - checks if n is prime
 * @n: number to be checked
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (help(n, 2));
}

