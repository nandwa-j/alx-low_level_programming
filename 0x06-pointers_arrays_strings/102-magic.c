#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 * write your line of code here
 * remember:
 * - You are not allowed to use the variable a in your new line of code
 * - You are not allowed to modify the variable p
 * - only write one statement
 * - You are not allowed to code anything else than the line of c
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*(p + 5) = 98;
/* ... so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
