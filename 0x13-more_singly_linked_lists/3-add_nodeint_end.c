#include "lists.h"

/**
 * add_nodeint_end - appends a node at the end of a list
 * @head: list head
 * @n: list content
 * Return: new node pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *cursor = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (!*head)
	{
		*head = temp;
		return (temp);
	}

	while (cursor && cursor->next)
		cursor = cursor->next;
	cursor->next = temp;
	return (temp);
}
