#include "lists.h"

/**
 * add_nodeint_end - program that adds a node at the end of a linked list
 * @head: pointer to the head of the linked list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
