#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a;
for (a = 0; a < 52; a++)
{
putchar(letters[a]);
}
putchar('\n');
return (0);
}

