#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the head of the linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer to store in the new node.
 *
 * Return: If the function fails - NULL. Otherwise - a pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;

	if (i != idx - 1 || tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
