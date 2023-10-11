#include "main.h"
/**
 * main -prints 10 times alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char i;
int y;
y = 0;

while (y < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
_putchar('\n');
y++;
}
}
}

