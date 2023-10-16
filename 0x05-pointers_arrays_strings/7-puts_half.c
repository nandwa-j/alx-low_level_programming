#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: char array
 * Description: if the number of characters is odd print last n charaters
 */
void puts_half(char *str)
{
int a;
while (str[a] != '\0')
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
a++;
_putchar('\n');
}
}
