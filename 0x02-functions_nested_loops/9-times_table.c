#include "main.h"
/**
 * times_table - prints out the 9 times table starting with 0
 *
 */
void times_table(void)
{
int a = 0, b, c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (c < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
}
else
{
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
