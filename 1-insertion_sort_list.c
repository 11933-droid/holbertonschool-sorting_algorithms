/**
 * insertion_sort_list - sort doubly linked list ascending (Insertion)
 * @list: address of pointer to head node
 *
 * Description: swaps nodes, does not modify node->n; prints after each swap.
 */
#include "sort.h"
static void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
    listint_t *ap = a->prev;
    listint_t *bn = b->next;
    if (ap)
	ap->next = b;
    else
	*list = b;
    if (bn)
	bn->prev = a;
    b->prev = ap;
    b->next = a;
    a->prev = b;
    a->next = bn;
}
void insertion_sort_list(listint_t **list)
{
    listint_t *cur, *scan;
    if (!list || !*list || !(*list)->next)
	return;
    cur = (*list)->next;
    while (cur)
    {
	scan = cur;
	while (scan->prev && scan->n < scan->prev->n)
	{
	    swap_nodes(list, scan->prev, scan);
	    print_list(*list);
	}
	cur = scan->next;
    }
}
