#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: type int integer can be positive negative or zero
 * Return: 1 if n is greater than zero. -1 if n is less than 0. 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

