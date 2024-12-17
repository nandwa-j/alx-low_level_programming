#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int num;
        char dec;

        num = 0;
        dec = 'a';


        while (num < 10)
        {
                putchar(48 + num);
                num++;
        }
        while (dec <= 'f')
        {
                putchar(dec);
                dec++;
        }
        putchar('\n');
        return (0);
}

