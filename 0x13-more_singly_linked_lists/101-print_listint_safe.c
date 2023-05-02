#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list or function
 *	exits the program with status 98 if it fails to print the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		count++;
		current = current->next;
		if (current == head)
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
	}

	if (count == 0)
		exit(98);
}
