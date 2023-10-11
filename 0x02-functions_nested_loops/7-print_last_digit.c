#include "main.h"
/**
 * print_last_digit - print last digit of a nuber
 * @r: int type number
 *
 * Return: value of last digit
 */
int print_last_digit(int r)
{
int rs;

if (r < 0)
{
rs = -1 * (n % 10);
_putchar(rs + '0');
return (rs);
}
else
{
rs = n % 10;
_putchar(rs + '0');
return (rs);
}
}
