#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char rev[26] = "zyxwvutsrqponmlkjihgfedcba";
int a;

for (a = 0; a < 26; a++)
{
putchar(rev[a]);
}
putchar('\n');
return (0);
}
