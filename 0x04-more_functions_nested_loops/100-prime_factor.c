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
while (b < a)
{
if (a % b == 0)
{
a /= b;
b = 2;
}
else
{
b++;
}
printf("%lu\n", b);
break;
}
return (0);
}
