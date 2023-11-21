#include "lists.h"
/**
 * pop_listint - deletes the head node of a lisint_t linked list
 * @head: begining of the list
 * Return: head nodes data(n), 0 if empty
 */
int pop_listint(listint_t **head)
{
listint_t *hold;
int n;
if (head && *head)
{
hold = *head;
n = (**head).n;
*head = (**head).next;
free(hold);
return (n);
}
return (0);
}
