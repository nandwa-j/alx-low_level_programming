#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: beginning of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	int flag = 0, i = 0;

	slow = head;
	fast = head;
	if (!head)
	{
		exit(98);
	}
	while (fast && fast->next && !flag)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			flag = 1;
		}
	}
	if (flag)
	{
		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			i++;
			slow = slow->next;
			fast = fast->next;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			i++;
			head = head->next;
		}
	}
	return (i);
}

