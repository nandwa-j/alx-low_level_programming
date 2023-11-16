#include "lists.h"
#include <stdio.h>
/**
 * print_list - printa all elements of a list_t list
 * @h: singly linked list
 * Return: number of nodes if sucesful
 */
size_t print_list(const list_t *h)
{
size_t a;
a = 0;
for (; h != NULL; h = h->next, a++)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
}
return (a);
}
