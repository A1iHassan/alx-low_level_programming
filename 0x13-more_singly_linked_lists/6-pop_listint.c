#include "lists.h"

/**
 * pop_listint - pops a node from the begining of a list
 * @head: list head
 * Return: poped node content
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!*head)
		return (0);

	temp = *head;
	*head = temp->next;
	i  = temp->n;
	free(temp);
	return (i);
}
