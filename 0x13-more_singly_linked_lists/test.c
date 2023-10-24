#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listadrs_s
{
	long int n;
	struct listadrs_s *next;
} listadrs_t;

/**
 * add_nodeint - inserts a new node at the begining of a list
 * @head: list head
 * @n: list content
 * Return: new node's pointer
 */

listadrs_t *add_nodeadrs(listadrs_t **head, long int n)
{
	listadrs_t *temp;

	temp = malloc(sizeof(listadrs_t));
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

/**
 * is_in - detects if the comtains the value
 * @a: list head
 * @b: desired value
 * Return: success and faliure indecator
 */

int is_in(listadrs_t *a, long int b)
{
	listadrs_t *temp;

	temp = a;
	while (temp)
	{
		if (b == temp->n)
			return (-1);
		temp = temp->next;
	}
	return (1);
}
size_t print_listint_safe(const listint_t *head)
{
	listadrs_t *adrs = NULL;
	const listint_t *cursor = head;
	int i = 0;

	while (cursor)
	{
		if (is_in(adrs, (long int)(&cursor)))
		{
			add_nodeadrs(&adrs, (long int)(&cursor));
			printf("[%p] %d\n", (void *)(&cursor), cursor->n);
			i++;
			cursor = cursor->next;
		}
	}
	return (i);
}
