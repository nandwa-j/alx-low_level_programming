#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main()
{
	unsigned int a, b, c, count;
    	
	a = 1;
    	b = 2;
    	count = 0;
    	
	printf("%u, ", a);
    	while (count < 99 )
    	{
        	if (count == 98)
        	{
            	printf("%u\n", b);
        	}
        	else 
        	{	
            		printf("%u, ", b);
        	}
        	c = b;
        	b += a;
        	a = c;
        	count ++;
    	}
    	return (0);
}
