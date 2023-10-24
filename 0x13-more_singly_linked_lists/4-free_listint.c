#include "lists.h"

/**
 * free_listint - frees all list nodes
 * @head: list hesd
 */

void free_listint(listint_t *head)
{
	listint_t *cursor = head, *temp;

	while (cursor)
	{
		temp = cursor->next;
		free(cursor);
		cursor = temp;
	}
}
