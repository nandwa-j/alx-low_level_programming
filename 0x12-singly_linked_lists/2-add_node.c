#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function that adds a node at the begining pf a list_t list
 * @str: string to be saved, needs to be duplicated
 * @head: first node
 * @Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
if (head == NULL)
{
return (NULL);
}
list_t *new_node = malloc(sizeof(list_t));
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
new_node->next = *head;
*head = new_node;
return (new_node);
}
