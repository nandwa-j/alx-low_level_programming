#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
if (numbers == '9')
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
