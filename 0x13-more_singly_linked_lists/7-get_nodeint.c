#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @index: index
 * @head: begining of the list
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;
for (a = 0; head; a++, head = (*head).next)
{
if (a == index)
{
return (head);
}
}
return (NULL);
}
