#include <stdio.h>

void print_buffer(char *b, int size)
{
    int i, j;
    
    /* Handle size 0 or negative */
    if (size <= 0)
    {
        printf("\n");
        return;
    }
    
    /* Process buffer in chunks of 10 bytes */
    for (i = 0; i < size; i += 10)
    {
        /* Print position in 8 chars hexadecimal */
        printf("%08x: ", i);
        
        /* Print hexadecimal content */
        for (j = 0; j < 10; j += 2)
        {
            if (i + j < size)
                printf("%02x", *(b + i + j) & 0xff);
            else
                printf("  ");
                
            if (i + j + 1 < size)
                printf("%02x ", *(b + i + j + 1) & 0xff);
            else
                printf("   ");
        }
        
        /* Print ASCII content */
        for (j = 0; j < 10 && i + j < size; j++)
        {
            char c = *(b + i + j);
            /* Check if character is printable */
            if (c >= 32 && c <= 126)
                printf("%c", c);
            else
                printf(".");
        }
        
        printf("\n");
    }
}
