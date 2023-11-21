#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that free a listint_t linked list
 * @h: pointer to the beginning of linked list
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
int a, flag = 0;
listint_t *slow, *fast, *delete;
if (!h)
return (0);
for (a = 0; *h && !flag; a++)
{
slow = *h;
fast = (**h).next;
while (slow != fast)
{
if (slow)
slow = (*slow).next;
if (fast)
fast = (*fast).next;
if (fast == *h)
flag = 1;
if (fast)
fast = (*fast).next;
if (fast == *h)
flag = 1;
}
delete = *h;
*h = (**h).next;
free(delete);
}
while (flag && *h != fast)
{
delete = *h;
a++;
*h = (**h).next;
free(delete);
}
*h = NULL;
return (a);
}
