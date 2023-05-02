#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list.
 * @head: double pointer to the head of the list.
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
