#include "lists.h"

/**
 * print_listint - prints a list's content
 * @h: head pointer
 * Return: nodes count
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	int i = 0;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		i++;
		cursor = cursor->next;
	}
	return (i);
}
