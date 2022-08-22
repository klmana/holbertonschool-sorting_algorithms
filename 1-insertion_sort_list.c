#include "sort.h"

/**
 *swap - function to swap two nodes
 *@left: the node that was initially on the left before swap
 *@right: the node that was initially on the right before swap
 */
void swap(listint_t *left, listint_t *right)
{
	if (right->next)
		right->next->prev = left;
	if (left->prev)
		left->prev->next = right;
	left->next = right->next;
	right->next = left;
	right->prev = left->prev;
	left->prev = right;
}



/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to stuct node after each time you swap two element
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *prev;

	if (list != NULL && *list != NULL)
	{
		next = (*list)->next;
		while ((current = next))
		{
			next = current->next;
			prev = current->prev;
			while (prev != NULL && prev->n > current->n)
			{
				swap(prev, current);
				prev = current->prev;
				if (prev == NULL)
					*list = current;
				print_list(*list);
			}
		}
	}
}
