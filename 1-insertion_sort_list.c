#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * of integers in ascending order using the
 * Insertion sort
 * @list: lsit to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	if (list == NULL || (*list)->next == NULL)
		return;

	temp = (*list)->next;

	while (temp)
	{
		current = temp;

		while (current->prev && current->prev->n > current->n)
		{
			current = swap_number(current, list);

			print_list(*list);
		}
		temp = temp->next;
	}
}

/**
 * swap_number - checks each index of the list then
 * compare them if next index is greater than
 * prev index then swap
 * @list: list to be checked
 * @temp: stores value temporary
 * Return: sorted list
 */

listint_t *swap_number(listint_t *temp, listint_t **list)
{
	listint_t *decreament = temp->prev, *current = temp;

	decreament->next = current->next;

	if (current->next)
		current->next->prev = decreament;

	current->next = decreament;
	current->prev = decreament->prev;

	decreament->prev = current;

	if (current->prev)
		current->prev->next = current;

	else
		*list = current;
	return (current);
}
