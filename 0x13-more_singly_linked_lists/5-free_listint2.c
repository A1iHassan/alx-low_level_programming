#include "lists.h"

/**
 * free_listint2 - frees all list nodes
 * @head: list hesd
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor, *temp;

	if (head)
	{
		cursor = *head;
		while (cursor)
		{
			temp = cursor->next;
			free(cursor);
			cursor = temp;
		}
		*head = NULL;
	}
}
