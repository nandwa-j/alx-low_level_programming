#include <stdio.h>
/**
 * main - Print largest prime factor of number
 *
 * Return: Always 0 (success);
 */
int main(void)
{
unsigned long a = 612852475143;
unsigned long b = 2;
unsigned long c = 0;
while (a > 1)
{
if (a % b == 0)
{
a /= b;
c = b
}
else
{
b++;
}
}
printf("%lu\n", c);
return (0);
}
