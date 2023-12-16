#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that frees a listint_t linked list
 * @h: pointer to the beginning of linked list
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	int a;
	listint_t *slow, *fast, *delete;

	if (!h || !*h)
		return (0);

	for (a = 0; *h; a++)
	{
		slow = *h;
		fast = (*h)->next;

		while (slow != fast)
		{
			if (slow)
				slow = slow->next;
			if (fast)
				fast = fast->next;
			if (fast == *h)
				break;
			if (fast)
				fast = fast->next;
			if (fast == *h)
				break;
		}

		if (fast == *h)
		{
			slow = *h;
			fast = (*h)->next;
			while (slow != fast)
			{
				delete = slow;
				slow = slow->next;
				free(delete);
			}
			free(slow);
			break;
		}
		delete = *h;
		*h = (*h)->next;
		free(delete);
	}
	*h = NULL;
	return (a);
}

