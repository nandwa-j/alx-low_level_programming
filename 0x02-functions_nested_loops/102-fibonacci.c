#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int count = 2;
long int a = 1, b = 2;
long int c;

printf("%1lu, ", a);
while (count <= 50)
{
if (count == 50)
{
printf("%1lu\n", b);
}
else
{
printf("%1lu, ", b);
}
c = b;
b += a;
a = c;
count++;
}
return (0);
}
