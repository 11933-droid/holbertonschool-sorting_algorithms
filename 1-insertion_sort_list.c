#include "sort.h"

/**
 * swap_nodes - Swap two adjacent nodes in a doubly linked list
 * @list: Address of the head pointer of the list
 * @left: Node that currently comes before @right
 * @right: Node that currently comes after @left
 *
 * Description: After this call, @right will be placed before @left
 */

static void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	listint_t *lprev = left->prev;
	listint_t *rnext = right->next;

	if (lprev != NULL)
		lprev->next = right;
	else
		*list = right;

	if (rnext != NULL)
		rnext->prev = left;

	right->prev = lprev;
	right->next = left;

	left->prev = right;
	left->next = rnext;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: Address of the head pointer
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *probe;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		probe = curr;

		while (probe->prev != NULL && probe->prev->n > probe->n)
		{
			swap_nodes(list, probe->prev, probe);
			print_list(*list);
		}

		curr = probe->next;
	}
}
