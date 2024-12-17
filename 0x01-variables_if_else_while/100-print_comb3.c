#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
        int num1;


        for (num = 0; num < 9; num++)
        {
                for (num1 = num + 1; num1 <= 9; num1++)
                {
                	putchar(48 + num);
                	putchar(48 + num1);
                	if (num == 8 && num1 == 9)
                	{
                        	break;
                	}
                putchar(',');
                putchar(' ');
		}

        }
        return (0);
}

