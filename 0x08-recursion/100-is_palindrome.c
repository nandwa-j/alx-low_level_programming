#include "main.h"
/**
 * get_length - gets length of string
 * @str: pointer to a string
 * @len: length of a string
 * Return: return length of string
 */
int get_length(char *str, int len)
{
if (*(str + len) != '\0')
{
return (get_length(str, ++len));
}
return (--len);
}
/**
 * check_pali - gets length of string
 * @a: pointer to a string
 * @b: length of a string
 * @len: length of a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int check_pali(char *a, char *b, int len)
{
if (*a == *(b + len) && len > 1)
{
a++;
return (check_pali(a, b, --len));
}
if (len == 1)
{
return (0);
}
return (1);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int is_palindrome(char *s)
{
return (check_pali(s, s, get_length(s, 0)));
}
