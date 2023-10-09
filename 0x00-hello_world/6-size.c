#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("size of a char: %u byte(s)\n", sizeof(unsigned char));
printf("size of an int: %u byte(s)\n", sizeof(unsigned int));
printf("size of a long int: %u  byte(s)\n", sizeof(unsigned long int));
printf("size of a long long  int: %u byte(s)\n", sizeof(unsigned long long int));
printf("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
