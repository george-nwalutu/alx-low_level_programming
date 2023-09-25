#include "lists.h"

/**
 * print_listint - program that prints all the elements of a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}
