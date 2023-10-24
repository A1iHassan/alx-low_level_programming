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
	unsigned int i = (unsigned)listint_len(head);
	int j;
	listint_t *cursor;

	if (i < index - 1)
		return (NULL);

	cursor = head;
	for (j = index; j > 0; j--)
		cursor = cursor->next;
	return (cursor);
}	
