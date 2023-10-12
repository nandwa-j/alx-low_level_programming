#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ is printed
 *
 */
void print_diagonal(int n)
{
int times;
for (times = n; times > 0; times--)
{
if (times <= 0)
{
_putchar('\n');
}
_putchar('\');
}
_putchar('\n');
}
