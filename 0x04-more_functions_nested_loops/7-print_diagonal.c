#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
int m, o;
if (n <= 0)
{
_putchar('\n');
}
for (m = 0; m < n; m++)
{
for (o = 0; o < m; o++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
