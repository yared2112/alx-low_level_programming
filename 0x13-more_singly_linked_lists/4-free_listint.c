#include "lists.h"

/**
 *free_listint - frees a listint_t list
 * @head: pointer to the head node
 */

void free_listint(listint_t *head)
{
listint_t *node;

while (head != NULL)
{
node = head;  /* make node point to where head is pointing */
head = head->next; /* head points to next node */
free(node);   /* free the node that is pointed */
}
}
