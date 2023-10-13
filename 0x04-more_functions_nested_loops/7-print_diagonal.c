#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
int m, o;
times = 0;
if (times <= 0)
{
_putchar('\n');
}
for (m = 0; m < n; times++)
{
for (o = 0; o < m; o++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
