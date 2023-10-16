#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: length of an array
 */
void print_array(int *a, int n)
{
int count;
count = 0;
while (count < n)
{
if (count != (n - 1))
{
prinf("%i, ", a[count]);
}
else
{
printf("%i", a[count]);
}
count++;
}
printf("\n");
}
