#include "lists.h"
#include <stdio.h>
/**
 * print_list - printa all elements of a list_t list
 * @h: singly linked list
 * Return: number of nodes if sucesful
 */
size_t print_list(const list_t *h)
{
int a;
char *str;
for (a = 0; h; a++, h = h->next)
{
str1 = h->str;
if (str1)
{
printf("[%i] %s\n", h->len, str1);
}
else
{
printf("[0] %p\n", str1);
}
}
return (a);
}
