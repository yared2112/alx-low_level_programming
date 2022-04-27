#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index index
 *of a listint_t linked list.
 *@head: double pointer to head node
 *@index: index of a node that should be deleted
 *Return: 1 upon succeed, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp_node;
listint_t *node;

tmp_node = *head;
if (tmp_node == NULL)
return (-1);

if (index == 0)
{
*head = tmp_node->next;
free(tmp_node);
return (1);
}

i = 1;
while (i < index)
{
tmp_node = tmp_node->next;
if (tmp_node == NULL)
return (-1);
i++;
}

node = tmp_node->next;
tmp_node->next = node->next;
free(node);
return (1);
}
