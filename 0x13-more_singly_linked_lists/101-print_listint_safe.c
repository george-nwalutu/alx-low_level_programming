#include "lists.h"
#include <stdio.h>

/**
 * count_unique_nodes - program Counts the number of unique nodes
 * @head: A pointer to the begining of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t count_unique_nodes(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t node_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	while (fast_ptr)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				node_count++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				node_count++;
				slow_ptr = slow_ptr->next;
			}

			return (node_count);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}

	return (0);
}

/**
 * print_list_safe - functions that Print a listint_t list safe.
 * @head: A pointer to the beginning of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t total_nodes, index = 0;

	total_nodes = count_unique_nodes(head);

	if (total_nodes == 0)
	{
		for (; head != NULL; total_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < total_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (total_nodes);
}
