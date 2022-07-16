#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using
 * insertion sort algorithm
 *
 * @list: the linked list to be sorted
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *transversal = NULL;
	listint_t *temp = NULL;

	if (*list == NULL || list == NULL)
		return;

	for (current = *list; current != NULL; current = current->next)
	{
		for (transversal = current; current->prev != NULL;)
		{
			if (transversal->n < transversal->prev->n)
			{
				if (transversal->prev->prev != NULL)
					transversal->prev->prev->next = transversal;
				else
					*list = transversal;

				if (transversal->next != NULL)
					transversal->next->prev = transversal->prev;

				temp = transversal->prev->prev;

				transversal->prev->next = transversal->next;
				transversal->prev->prev = transversal;

				transversal->next = transversal->prev;
				transversal->prev = temp;

				print_list(*list);
			}
			else
				break;
		}
	}
}

