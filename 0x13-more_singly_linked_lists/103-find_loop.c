#include "lists.h"

/**
 * find_linked_list_loop - Detects the loop in a linked list.
 * @head: Pointer to the linked list to search for a loop.
 *
 * Return: The address of the node where the loop begins, or NULL if no loop.
 */
listint_t *find_linked_list_loop(listint_t *head)
{
	listint_t *slow_ptr = head;
	listint_t *fast_ptr = head;

	if (!head)
		return (NULL);

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
		if (fast_ptr == slow_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (fast_ptr);
		}
	}

	return (NULL);
}
