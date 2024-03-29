#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *new_node, *current;

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* If inserting at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the node before the insertion point */
	current = *head;

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	/* If the index is out of range */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

    /* Insert the new node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

