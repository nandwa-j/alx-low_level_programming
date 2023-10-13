#include "main.h"
/**
 * print_number - prints an integer
 * @n: type int
 *
 */
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}
if (num / 10 != 0)
{
_putchar(num / 10);
}
_putchar((num % 10) + '0');
}
