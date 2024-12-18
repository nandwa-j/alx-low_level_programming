#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char i;
	int y;
	y = 0;

	while (y < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		y++;
	}
}

