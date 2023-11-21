#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @index: is the index of the node that should be deleted.
 * @head: begining of list
 * Return: 1 if it succeeds -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *hold, *delete;
unsigned int i, action = 0;
if (!head)
{
return (-1);
}
for (i = 0, hold = *head; hold && index; i++, hold = (*hold).next)
{
if (i == (index - 1))
{
action = 1;
break;
}
}
if (action)
{
delete = (*hold).next;
(*hold).next = (*delete).next;
free(delete);
return (1);
}
else if (!index && (**head).next)
{
delete = *head;
*head = (*delete).next;
free(delete);
return (1);
}
else if (!index && *head)
{
*head = NULL;
free(*head);
return (1);
}
return (-1);
}
