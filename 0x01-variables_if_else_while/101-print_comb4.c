#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(success)
 */
int main(void)
{
int num;
int num1;
int num2;

for (num = '0'; num <= '7'; num++)
{
for (num1 = num + 1; num1 <= '9'; num1++)
{
for (num2 = num1 + 1; num2 <= '7'; num2++)
{
putchar(num);
putchar(num1);
putchar(num2);
if (num == '7' && num1 == '8' && num2 == '9')
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
