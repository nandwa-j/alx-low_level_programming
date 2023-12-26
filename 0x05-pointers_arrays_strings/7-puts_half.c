#include "main.h"
#include "string.h"
/**
 * puts_half - print the second half of a string
 * @str: char array
 * Description: if the number of characters is odd print last n charaters
 */
void puts_half(char *str)
{
	int a, len, n;

	len = strlen(str);
	n = (len - 1) / 2;
	for (a = n + 1; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
