#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		if (current->visited == 1)
			break;
		current->visited = 1;
		next = current->next;
		free(current);
		size++;
		current = next;
	}

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		current->visited = 0;
		current = next;
	}

	*h = NULL;
	return (size);
}
