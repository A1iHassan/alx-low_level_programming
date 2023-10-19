#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - prints list's elements
 * @h: node pointer
 * Return: nodes count
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL || strlen(h->str) == 0)
		printf("[0] (nill)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
