#include "lists.h"

/**
 *free_listint2 - frees a listint_list
 * @head: pointer to head node
 * the function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
listint_t *tmp_head;      /* tmp_head that points to head node */
listint_t *node;

if (head == NULL)
return;

tmp_head = *head;
while (tmp_head != NULL)
{
node = tmp_head->next; /* point to next node after head node*/
free(tmp_head);    /* free head node*/
tmp_head = node;   /* set the next node to head node*/
}
(*head) = NULL;  /* (main() head = NULL) */
}
