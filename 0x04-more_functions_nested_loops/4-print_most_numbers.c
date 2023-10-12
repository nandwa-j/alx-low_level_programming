#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9
 *
 */
void print_most_numbers(void)
{
int a;
a = 48;
while (a < 58)
{
if (a != 50 && a != 52)
{
break;
}
_putchar(a);
a++;
}
_putchar('\n');
}
