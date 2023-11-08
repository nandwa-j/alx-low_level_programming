#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - sum of a and b
 * @a: type integer
 * @b: type integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return ((a) + (b));
}
/**
 * op_sub - gets the difference between a and b
 * @a: type integer
 * @b: type integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return ((a) - (b));
}
/**
 * op_mul - multiplies a and b
 * @a: type integer
 * @b: type integer
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
return ((a) * (b));
}
/**
 * op_div - divides a and b
 * @a: type integer
 * @b: type integer
 * Return: division of a and b
 */
int op_div(int a, int b)
{
if (!b)
{
printf("Error\n");
exit(100);
}
return ((a) / (b));
}
/**
 * op_mod - modulus of a and b
 * @a: type integer
 * @b: type integer
 * Return: remainder if successful
 */
int op_mod(int a, int b)
{
if (b)
{
return ((a) % (b));
}
printf("Error\n");
exit(100);
}
