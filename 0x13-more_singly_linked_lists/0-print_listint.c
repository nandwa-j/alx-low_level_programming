#include "list.h"
/**
 * print_listint - prints all the elemnts of a listint_t list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int a;
for (a = 0; h; h = (*h).next, a++)
{
printf("%d\n', (*h).n);
}
return (a);
}
