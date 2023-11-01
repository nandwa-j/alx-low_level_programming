#include "main.h"
/**
 * print_triangle - prints a triangle
 * @#: character to print the triangle
 * @size: integer
 */
void print_triangle(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size - a; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
