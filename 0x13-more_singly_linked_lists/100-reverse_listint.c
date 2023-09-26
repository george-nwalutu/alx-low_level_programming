#include "lists.h"

/**
 * reverse_listint - function that Reverses a singly linked list.
 *
 * @head: A pointer to the head node of the list.
 *
 * Return: A pointer to the head node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_head = NULL;
	listint_t *next_node = NULL;

	if (!head || !*head)
		return (NULL);

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = new_head;
		new_head = *head;
		*head = next_node;
	}

	*head = new_head;

	return (new_head);
}
