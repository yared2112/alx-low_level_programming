#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: double pointer to head node
 *
 *Return: head node's data(n) or
 *0 if linked list is empty
 */

int pop_listint(listint_t **head)
{

listint_t *tmp_head;
int data;

if (*head == NULL)
return (0);
tmp_head = *head;
data = tmp_head->n; /*get data after setting tmp_head */
*head = tmp_head->next;
free(tmp_head);
return (data);
}
