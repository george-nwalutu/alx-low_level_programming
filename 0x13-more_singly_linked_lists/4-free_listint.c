#include "lists.h"

/**
 * free_listint - program that frees a linked list
 * @head: pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
