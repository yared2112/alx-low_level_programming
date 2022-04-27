#include "lists.h"

/**
 *add_nodeint_end - adds a nex node at the end of a listint_t list
 * @head: pointer to head node
 * @n: value of the first member of the structure
 *
 *Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new_node, *tmp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
}
return (*head);
}
