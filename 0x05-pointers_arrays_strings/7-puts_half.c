#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: char array
 * Description: if the number of characters is odd print last n charaters
 */
void puts_half(char *str)
{
int b = 0;
int a;
while (str[b] != '\0')
{
b++;
}
a = (b + 1) / 2;
while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
}
