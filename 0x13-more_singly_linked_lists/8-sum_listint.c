#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: begining of a list
 * Return: sum of all the data, 0 if empty
 */
int sum_listint(listint_t *head)
{
unsigned int a;
for (a = 0; head; head = (*head).next)
{
a += (*head).n;
}
return (a);
}
