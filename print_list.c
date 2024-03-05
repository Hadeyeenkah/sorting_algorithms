#include "sort.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a doubly linked list
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	const listint_t *current = list;

	while (current != NULL)
	{
		printf("%d", current->n);
		if (current->next != NULL)
			printf(", ");
		current = current->next;
	}
	printf("\n");
}
