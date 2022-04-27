#include "lists.h"

/**
 *insert_nodeint_at_index -  inserts a new node at a given position
 *@head: double pointer to head node
 *@idx: index of the list where new node should be added
 *@n: value of the first member of new node
 *
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

unsigned int i;
listint_t *tmp_node;
listint_t *new_node;

if (head == NULL)
return (NULL);

if (idx == 0)
{
tmp_node = add_nodeint(head, n);
return (tmp_node);
}

tmp_node = *head;
i = 1;
while (i < idx)  /* travers till idx and get the node to insert */
{
tmp_node = tmp_node->next;
if (tmp_node == NULL)
return (NULL);
i++;
}

new_node = malloc(sizeof(listint_t));  /* allocate new node */
if (new_node == NULL)
return (NULL);

new_node->n = n;                      /* set value in new node */
new_node->next = tmp_node->next; /* link on the right */
tmp_node->next = new_node;   /* link on the left side */
return (new_node);
}


/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head : pointer to head node
 *@n: value of the first member of the structure
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
