#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list or function
 *	exits the program with status 98 if it fails to print the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *temp;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
		
		temp = current;
		current = current->next;
	}

	return (count);
}
