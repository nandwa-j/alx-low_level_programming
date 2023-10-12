#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
int times;
times = 0;
if (times <= 0)
{
_putchar('\n');
}
for (times = n; times > 0; times--)
{
_putchar('\\');
}
_putchar('\n');
}