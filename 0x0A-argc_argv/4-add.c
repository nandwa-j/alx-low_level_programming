#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add 2 positive numbers and print the result
 * @argc: argument
 * @argv: pointer to arguement
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if successful
 */

int main(int argc, char *argv[])
{
int total, i;
char *p;
int num;
total = 0;
if (argc > 1)
{
for (i = 1; argv[i]; i++)
{
num = strtol(argv[i], &p, 10);
if (!*p)
total += num;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", total);
return (0);
}
