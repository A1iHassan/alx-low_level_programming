#include "lists.h"

/**
 * reverse_listint - reverses the order of a given list node
 * @head: head of the list
 * Return: pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cursor1 = NULL, *cursor2 = NULL;

	while (!*head)
	{
		cursor2 = (*head)->next;
		(*head)->next = cursor1;
		cursor1 = *head;
		*head = cursor2;
	}

	*head = cursor1;
	return (cursor1);
}
