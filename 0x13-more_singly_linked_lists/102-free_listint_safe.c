#include "lists.h"

/**
 * free_listint_safe - program that Frees a linked list safely.
 * @h: A pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t element_count = 0;
	int diff;
	listint_t *temporary;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			element_count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			element_count++;
			break;
		}
	}

	*h = NULL;

	return (element_count);
}
