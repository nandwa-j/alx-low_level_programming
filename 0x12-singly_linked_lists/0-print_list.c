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
printf("[%1u] %s\n", (unsigned long)a, "(nil)");
}
else
{
printf("[%1u] %s\n", (unsigned long)h->len, h->str);
}
}
return (a);
}
