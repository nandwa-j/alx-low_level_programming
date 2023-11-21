#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: begining of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
if (!head)
exit(98);
const listint_t *slow = head, *fast = head;
int flag = 0, i = 0;
while (fast && fast->next && !flag)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
flag = 1;
}
for (; flag && head != fast; i++, head = head->next)
{
printf("[%p] %d\n", (void *)head, head->n);
}
printf("[%p] %d\n", (void *)head, head->n);
if (flag)
printf("-> [%p] %d\n", (void *)fast, fast->n);
return (i + 1);
}
