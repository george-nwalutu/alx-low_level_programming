#include "lists.h"

/**
 * free_listint_safe - program that Frees a listint_t linked list safely.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		nodes++;
		tmp = current;
		current = current->next;
		free(tmp);

		if (current == *h) /* If loop is detected, break loop */
		{
			*h = NULL;
			break;
		}
	}

	return (nodes);
}
