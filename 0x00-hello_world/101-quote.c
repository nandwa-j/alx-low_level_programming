#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (success)
 */

int main(void)
{
        char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

        while (*str) {
                putchar(*str++);
        }
        return 1;
}

