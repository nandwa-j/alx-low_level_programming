#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: is the index of the list where the new node should be added
 * @head: begining of the list
 * @n: type integer
 * Return: address of the new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *hold = *head;
unsigned int a = 0;
if (!idx)
{
new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
(*new).n = n;
(*new).next = *head;
*head = new;
return (*head);
}
while (hold)
{
if (a == (idx - 1))
{
new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
(*new).n = n;
(*new).next = (*hold).next;
(*hold).next = new;
return (new);
}
hold = (*hold).next;
a++;
}
return (NULL);
}
