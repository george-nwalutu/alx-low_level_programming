#include "lists.h"

/**
 * free_listint_safe - program to Safely frees a linked list.
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
		ptrdiff_t diff = (char *)(*h) - (char *)(*h)->next;

		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}

		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
