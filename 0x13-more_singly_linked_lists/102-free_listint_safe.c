#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @head: Head of the list
 *
 * Return: Return NULL
 **/
size_t free_listint_safe(listint_t **head)
{
int i, flag;
listint_t *tmp;

for (i = flag = 0; *head != NULL || flag; i++)
{
if (*head <= (*head)->next)
{
flag = 1;
break;
}

tmp = (*head)->next;
free(*head);
*head = tmp;
flag = 0;
}

if (flag)
{
tmp = (*head)->next;
free(*head);
i++;
}

*head = NULL;
return (i);
}
