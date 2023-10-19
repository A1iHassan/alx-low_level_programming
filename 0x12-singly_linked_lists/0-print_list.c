#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (1);
	if (h->str == NULL || strlen(str) == 0)
		printf("[0] (nill)\n");
	else
		printf("[%u] %s", h->len, h->str);
	return (1 + print_list(h->next));
}
