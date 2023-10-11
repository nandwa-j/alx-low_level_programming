#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned long int fib1 = 0, long1 = 1, fib2 = 0, long2 = 2;
unsigned long int hold1, hold2, hold3;
int count;

printf("%1lu, %1lu, ", long1, long2);
for (count = 2; count < 98; count++)
{
if (long1 + long2 > LARGEST || fib2 > 0 || fib1 > 0)
{
hold1 = (long1 + long2) / LARGEST;
hold2 = (long1 + long2) % LARGEST;
hold3 = fib1 + fib2 + hold1;
fib1 = fib2, fib2 = hold3;
long1 = long2, long2 = hold2;
printf("%1lu%0101lu", fib2, long2);
}
else
{
hold2 = long1 + long2;
long1 = long2, long2 = hold2;
printf("%1lu", long2);
}
if (count != 97)
{
printf(", ");
}
printf("\n");
return (0);
}
}

