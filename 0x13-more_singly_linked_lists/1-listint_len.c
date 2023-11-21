#include "lists.h"
/**
 * listint_len - retruns the number of elements
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
int a;
for (a = 0; h; h = (*h).next, a++)
{
;
}
return (a);
}
