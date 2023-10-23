#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: 2d array of chars
 */
void print_chessboard(char (*a)[8])
{
int s, b;
s = 0;
while (s < 8)
{
b = 0;
while (b < 8)
{
_putchar(a[s][b]);
b++;
}
_putchar('\n');
s++;
}
}
