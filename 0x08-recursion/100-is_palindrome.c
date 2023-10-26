#include "main.h"
/**
 * check_pali - checks if a string is a palindrome
 * @head: pointer to the start of the string
 * @tail: pointer to the end of the string
 * Return: 0 if it's not a palindrome, 1 if it is
 */
int check_pali(char *head, char *tail)
{
if (head >= tail)
{
return (1);
}
if (*head == *tail)
{
return (check_pali(head + 1, tail - 1));
}
return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: 0 if it's not a palindrome, 1 if it is
 */
int is_palindrome(char *s)
{
char *tail = s;
while (*tail)
{
tail++;
tail--;
}
return (check_pali(s, tail));
}
