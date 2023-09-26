#include "lists.h"

/**
 * reverse_listint - program to Reverses a singly linked list.
 *
 * @head: A pointer to the head node of the list.
 *
 * Return: A pointer to the head node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
