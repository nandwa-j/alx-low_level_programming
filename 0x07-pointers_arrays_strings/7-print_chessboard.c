#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: 2d array of chars
 */
void print_chessboard(char (*a)[8])
{
int a, b;
a = 0;
while (a < 8)
{
b = 0;
while (b < 8)
{
_putchar(a[a][b]);
b++;
}
_putchar('\n');
a++;
}
}
