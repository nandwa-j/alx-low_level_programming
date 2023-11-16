#include "lists.h"
#include <stdlib.h>
/**
 * free_lists - freees a list_t list
 * @head: node
 */
void free_list(list_t *head)
{
list_t *hold;
while (head != NULL)
{
hold = head;
head = head->next;
free(hold->str);
free(hold);
}
}
