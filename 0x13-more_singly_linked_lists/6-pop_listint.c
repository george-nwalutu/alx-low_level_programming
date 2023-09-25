#include "lists.h"

/**
 * pop_listint - program that deletes the head node of a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the data inside the node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
