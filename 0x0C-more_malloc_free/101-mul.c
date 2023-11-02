#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * Check if a string consists of only digits.
 * @str: string
 * Return: 1 if the string is numeric. 0 otherwise'
 */
int isNumeric(const char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}
return (1);
}
/**
 * Multiply two positive numbers.
 * @num1: type int
 * @num2: type int
 */
void multiplyNumbers(const char *num1, const char *num2)
{
int len1, len2, result;
if (!isNumeric(num1) || !isNumeric(num2))
{
printf("Error\n");
exit(98);
}
len1 = atoi(num1);
len2 = atoi(num2);
result = len1 * len2;
printf("%d\n", result);
}
/**
 * main - entry point
 * @argc: arguement
 * @argv: argument string
 * Return: 0 if  successful, 98 on error.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
multiplyNumbers(argv[1], argv[2]);
return (0);
}
