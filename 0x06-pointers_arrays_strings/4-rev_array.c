#include "main.h"
/**
 * reverse_array - reverses the contents of an array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
int b, d;
for (b = 0; b < (n / 2); b++)
{
d = a[b];
a[b] = a[n - b - 1];
a[n - b - 1] = d;
}
}
