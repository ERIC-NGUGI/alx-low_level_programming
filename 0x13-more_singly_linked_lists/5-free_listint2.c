#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
    listint_t *current, *next;

    /* Check if head pointer is NULL */
    if (head == NULL)
        return;

    /* Iterate through the list */
    current = *head;
    while (current != NULL)
    {
        /* Store the next node */
        next = current->next;

        /* Free the current node */
        free(current);

        /* Move to the next node */
        current = next;
    }

    /* Set the head pointer to NULL */
    *head = NULL;
}

