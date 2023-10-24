#include "lists.h"

/**
 * print_listint_safe - prints a linked list without repetition
 * @head: list head
 * Return: nodes count
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	int i = 0;

	while (cursor)
	{
		printf("[%p] %d\n", (void *)cursor, cursor->n);
		i++;

		if (cursor <= cursor->next)
		{
			printf("-> [%p] %d\n", (void *)cursor->next, cursor->next->n);
			exit(98);
		}

		cursor = cursor->next;
	}

	return (i);
}
