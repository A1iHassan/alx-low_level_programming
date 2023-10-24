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
 * swap_node - swaps to values in two nodes
 * @a: first node
 * @b: second node
 */

void swap_node(listint_t *a, listint_t *b)
{
	int i;

	i = a->n;
	a->n = b->n;
	b->n = i;
}

/**
 * reverse_listint - reverses the order of list nodes
 * @head: list head
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	int i = 0, j = 0;

	if (!*head)
		return (NULL);
	if (listint_len(*head) % 2 == 0)
		i = listint_len(*head) / 2;
	else
		i = listint_len(*head) / 2 + 1;

	while (i > 0)
	{
		swap_node(get_nodeint_at_index(*head, j),get_nodeint_at_index(*head, (unsigned int)listint_len(*head) - j - 1));
		j++;
		i--;
	}
	return (*head);
}
