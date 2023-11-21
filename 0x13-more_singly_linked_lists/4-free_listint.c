#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the begining of the list
 */
void free_listint(listint_t *head)
{
listint_t *hold;
while (head)
{
hold = head;
head = (*head).next;
free(hold);
}
}
