#include "lists.h"
/**
 * add_nodeint_end - add a new node to the end of a listint_t list
 * @head: pointer to the start of the linked list
 * @n: value to be added
 * Return: the address of the new element, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *final;
if (!head)
{
return (NULL);
}
new = malloc(sizeof(lisint_t));
if (!new)
{
return (NULL);
}
(*new).n = n;
(*new).next = NULL;
if (head && !*head)
{
*head = new;
return (new);
}
for (final = *head; (*final).next; final = (*final).next)
{
;
}
(*final).next = new;
return (new);
}
