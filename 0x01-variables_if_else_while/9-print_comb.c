#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int num;

         num = 0;

         while (num < 10)
         {
                 if (num == 9)
                 {
                         putchar(48 + num);
                 }
                 else
                 {
                        putchar(48 + num);
                        putchar(',');
                        putchar(' ');
                 }
                 num++;
         }
        return (0);
}

