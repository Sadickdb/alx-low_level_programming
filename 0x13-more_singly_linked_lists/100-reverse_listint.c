#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	*head = prev;
	return (prev);
}
