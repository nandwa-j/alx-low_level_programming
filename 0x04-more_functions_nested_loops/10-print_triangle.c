#include "main.h"
/**
 * print_triangle - prints a triangle
 * @#: character to print the triangle
 */
void print_triangle(int size)
{
int a, b, c;
if (size <= 0)
{
_putchar('\n');
}
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
for (c = 0; c < size; c++)
{
_putchar('#');
}
}
}
_putchar('\n');
}
