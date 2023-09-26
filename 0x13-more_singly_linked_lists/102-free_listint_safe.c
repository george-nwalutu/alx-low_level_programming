#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;

		*h = current->next;

		free(current);

		len++;
	}

	*h = NULL;

	return (len);
}
