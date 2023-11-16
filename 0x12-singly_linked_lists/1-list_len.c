#include "lists.h"
/**
 * list_len - prints the size of a list_t list
 * @h: singly linked list
 * Return: total number of nodes
 */
size_t list_len(const list_t *h)
{
size_t a = 0;
for (; h; h = h->next, a++)
{
;
}
return (a);
}
