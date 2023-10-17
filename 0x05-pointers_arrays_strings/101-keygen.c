#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: Always 0
 */
int main(void)
{
int a, b;
a = 0;
b = 0;
time_t t;
srand((unsigned int) time(&t));
while (b < 2772)
{
a = rand() % 128;
if ((b + a) > 2772)
{
a = 2772 - b;
}
b = b + a;
printf("%d\n", a);
}
return (0);
}
