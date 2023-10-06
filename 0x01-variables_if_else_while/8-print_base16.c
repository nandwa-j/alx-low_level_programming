#include <stdio.h>
/**
 * main - Entry point
 *
 * REturn: Always 0 (success)
 */
int main(void)
{
int numbers;
int numbers1;

for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
for (numbers1 = 'a'; numbers1 <= 'f'; numbers1++)
{
putchar(numbers1);
}
putchar('\n');
return (0);
}
