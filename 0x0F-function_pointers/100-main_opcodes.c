#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of elements
 * @argv: arguements
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
int arg, i;
unsigned int *p;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
arg = atoi(argv[1]);
if (arg < 0)
{
printf("Error\n");
exit(2);
}
p = (unsigned char *)main;
for (i = 0; i < (arg - 1); i++)
{
printf("%02x ", p[i]);
}
printf("%02x", p[i]);
printf("\n");
return (0);
}
