#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, fib3;
int count;

printf("%1lu, %1lu, ", fib1, fib2);
for (count = 2; count < 98; count++)
{
fib3 = fib1 + fib2;
printf("%1lu", fib3);
fib1 = fib2;
fib2 = fib3;
if (count != 97)
{
printf(", ");
}
}
printf("\n");
return (0);
}
