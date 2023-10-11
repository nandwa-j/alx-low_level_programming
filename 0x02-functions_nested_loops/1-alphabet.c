#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
char c; 

for (c = 97; c <= 122; c++)
{
putchar(c);
}
putchar('\n');
}
