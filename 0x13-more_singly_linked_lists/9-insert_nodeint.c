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
 * insert_nodeint_at_index - inserts a new node at a given index in a list
 * @head: list head
 * @idx: insertion index
 * @n: new node content
 * Return: new node pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = (unsigned int)listint_len(*head);
	listint_t *cursor_after, *cursor_before, *temp;

	if (!*head || i < idx)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}		

	cursor_after = get_nodeint_at_index(*head, idx);
	if (!cursor_after)
		return (NULL);
	cursor_before = get_nodeint_at_index(*head, idx - 1);
	if (!cursor_before)
		return (NULL);

	temp->next = cursor_after;
	cursor_before->next = temp;
	return (temp);
}
