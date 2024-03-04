#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	/* If the node to be deleted is the head */

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);

		return (1);
	}

	current = *head;

	/* Traverse to the node before the one to be deleted */
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}

	/* If the index is out of range */

	if (current == NULL || current->next == NULL)
		return (-1);

	/* Delete the node */

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

