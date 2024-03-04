#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 * @head: Pointer to the pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp;

    /* Check if the list is empty */
	if (*head == NULL)
		return (0);

    /* Store the data of the head node */
	data = (*head)->n;

    /* Store the next node */
	temp = (*head)->next;

    /* Free the head node */
	free(*head);

    /* Update the head pointer */
	*head = temp;

    /* Return the data of the original head node */
	return (data);
}

