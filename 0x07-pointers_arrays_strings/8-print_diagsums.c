#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a matrix
 * @a: int type 
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
int b, sum1 = 0, sum2 = 0;
for (b = 0; b < size; b++)
{
sum1 += a[b * size + b];
sum2 += a[(b + 1) * (size - 1)]; 
}
printf("%d, %d\n", sum1, sum2);
}
