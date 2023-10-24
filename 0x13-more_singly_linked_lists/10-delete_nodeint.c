#include "lists.h"

/**
 * listint_len - counts list nodes
 * @h: list head
 * Return: nodes count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	int i = 0;

	while (cursor)
	{
		i++;
		cursor = cursor->next;
	}
	return (i);
}

/**
 * get_nodeint_at_index - searches a list by index
 * @head: list head
 * @index: position of desired node
 * Return: desired node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = (unsigned int)listint_len(head);
	int j;
	listint_t *cursor;

	if (!head || i < index)
		return (NULL);

	cursor = head;
	for (j = index; j > 0; j--)
		cursor = cursor->next;
	return (cursor);
}

/**
 * delete_nodeint_at_index - deletes a node at a given index in a list
 * @head: list head
 * @index: desired node index
 * Return: success or failure indecator
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = listint_len(*head);
	listint_t *temp, *cursor;

	if (!*head || i < index)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	cursor = get_nodeint_at_index(*head, index - 1);
	if (!cursor)
	{
		free(cursor);
		return (-1);
	}

	temp = cursor->next;
	cursor->next = cursor->next->next;
	free(temp);
	return (1);
}
