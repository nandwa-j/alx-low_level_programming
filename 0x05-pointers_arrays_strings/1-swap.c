#include "main.h"
/**
 * swap_int - swap to value pointers
 * @a: type int variable
 * @b: type int variable
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
