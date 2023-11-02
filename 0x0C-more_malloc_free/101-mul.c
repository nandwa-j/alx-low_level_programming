#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _checknum - checks if the string is a valid positive number and returns its length.
 */
int _checknum(char *str)
{
int l = 0;

while (str[l] != '\0')
{
if (!isdigit(str[l]))
{
printf("Error\n");
exit(98);
}
l++;
}
return (l);
}

/**
 * main - Entry point.
 * Program that multiplies two positive numbers represented as strings.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
int len1, len2;
len1 = _checknum(argv[1]);
len2 = _checknum(argv[2]);
if (len1 == 0 || len2 == 0)
{
printf("0\n");
return (0);
}
int result, resultlen;
resultlen = len1 + len2;
*result = (int *)calloc(resultlen, sizeof(int));
if (result == NULL)
{
printf("Error\n");
return (98);
}
int i, j;
for (i = len1 - 1; i >= 0; i--)
{
int carry;
carry = 0;
int num1 = argv[1][i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
int num2 = argv[2][j] - '0';
int product = num1 * num2 + result[i + j + 1] + carry;
result[i + j + 1] = product % 10;
carry = product / 10;
}
result[i] += carry;
}
int startIndex = 0;
while (startIndex < resultLen && result[startIndex] == 0)
{
startIndex++;
}
if (startIndex == resultLen)
{
printf("0\n");
}
else
{
for (int i = startIndex; i < resultLen; i++)
{
printf("%d", result[i]);
}
printf("\n");
}
free(result);
return (0);
}
