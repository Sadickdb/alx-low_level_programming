#include "lists.h"

/**
 * free_listint - free the memory of a listint_t list.
 * @head: head of the listint_t.
 *
 * Return: returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
