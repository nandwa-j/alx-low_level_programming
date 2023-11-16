#include "lists.h"
#include <stdio.h>
/**
 * print_list - printa all elements of a list_t list
 * @h: singly linked list
 * Return: number of nodes if sucesful
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
const char *str1;
for (; h; count++, h = h->next)
{
str1 = h->str;
if (str1)
{
printf("[%lu] %s\n", h->len, str1);
}
else
{
printf("[0] (nil)\n");
}
}
return (count);
}
