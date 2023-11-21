#include "lists.h"
/**
 * add_nodeint - adds a new node at the begining of a listint_t list
 * @n: new value
 * @head: first node
 * Return: address of new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a;
a = malloc(sizeof(listint_t));
if (!a)
{
return (NULL);
}
(*a).n = n;
(*a).next = *head;
*head = a;
return (*head);
}
