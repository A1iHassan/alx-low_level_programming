#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cursor1, *cursor2;

	cursor1 = NULL;

	while (!*head)
	{
		cursor2 = (*head)->next;
		(*head)->next = cursor1;
		cursor1 = *head;
		*head = cursor2;
	}

	*head = cursor1;
	return (*head);
}
