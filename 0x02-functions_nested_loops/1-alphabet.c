#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Print the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
char c;
c = 'a';

for (c = 97; c <= 122; c++)
{
_putchar(c);
}
_putchar('\n');
}
