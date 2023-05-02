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
	listint_t *temp;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			temp = *h;
			*h = NULL;
			free(temp);
			size++;
			break;
		}

		temp = (*h)->next;
		free(*h);
		*h = temp;
		size++;
	}
	return (size);
}
