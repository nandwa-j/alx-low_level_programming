#include "main.h"
/**
 * times_table - prints out the 9 times table starting with 0
 *
 */
void times_table(void)
{
        int row;
        int column;
        int result;

        for (row = 0; row < 10; row++)
        {
                for  (column = 0; column < 10; column++)
                {
                        result = column * row;
                        if (result < 10)
                        {
                                if (column != 0)
                                {
                                        _putchar(' ');
                                }
                                _putchar(48 + result);
                        }
                        else
                        {
                                _putchar(48 + result / 10);
                                _putchar(48 + result % 10);
                        }
                        if (column != 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
                _putchar('\n');
        }
}
