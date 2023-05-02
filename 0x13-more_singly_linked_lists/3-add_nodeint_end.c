#include "lists.h"

/**
 * add_nodeint_end - adds a new link node at the end of a linked list.
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element or NUll if it fails to allocate memory.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listin_t *new_node, *current;

	new_node = malloc(sizeof(listin_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	mew_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
