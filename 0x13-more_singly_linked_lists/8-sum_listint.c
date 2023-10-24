#include "lists.h"

/**
 * sum_listint - calculates the sum of list nodes
 * @head: list head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor;
	int i = 0;

	if (!head)
		return (0);

	cursor = head;
	while (cursor)
	{
		i += cursor->n;
		cursor = cursor->next;
	}
	return (i);
}
