#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: the begining of a list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
listint_t *hold;
while (head && *head)
{
hold = *head;
*head = (**head).next;
free(hold);
}
}
