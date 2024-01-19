#include "sort.h"
/**
 * insertion_sort_list -  Sorts a doubly linked list
 * @list: Pointer to the head
 * of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion_point;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		insertion_point = current->prev;

		while ((insertion_point != NULL) && (insertion_point->n > current->n))
		{
			if (insertion_point->prev != NULL)
				insertion_point->prev->next = current;
			else
				*list = current;
			if (current->next != NULL)
				current->next->prev = insertion_point;

			insertion_point->next = current->next;
			current->prev = insertion_point->prev;

			insertion_point->prev = current;
			current->next = insertion_point;

			print_list(*list);
			insertion_point = current->prev;
		}
		current = current->next;
	}
}
