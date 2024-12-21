#include "main.h"
/**
 * reverse_array - reverses the contents of an array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
     int r, l, t;
     l = 0;
     r = n -1;

      while (l < n / 2)
      {
        t = a[l];
        a[l] = a[r];
        a[r] = t;

        l++;
        r--;
      }

}
