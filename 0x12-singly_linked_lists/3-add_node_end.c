#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: string to be saved (needs to be duplicated)
 * Return: pointer to the new node or NULL if allocation fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last;
if (head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(new_node->str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
for (last = *head; last->next != NULL; last = last->next)
{
}
last->next = new_node;
return (new_node);
}
