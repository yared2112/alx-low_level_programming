#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to head node
 *@index: index of the node starting at 0
 *
 *Return: pointer to the nth node
 *or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

i = 0;
while (i != index)   /* traverse till i = index */
{
if (head == NULL)
return (NULL);
head = head->next;
i++;
}
return (head);   /* return pointed value at which i = index */
}
