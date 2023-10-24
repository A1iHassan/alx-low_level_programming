#include "lists.h"

/**
 * add_nodeint - inserts a new node at the begining of a list
 * @head: list head
 * @n: list content
 * Return: new node's pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

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

	temp->next = *head;
	*head = temp;
	return (temp);
}	
