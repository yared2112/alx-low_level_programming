#include "lists.h"

/**
 *sum_listint - sums all the data (n) of a listint_t linked list
 *@head: pointer to the head node
 *
 *Return: sum of all the data(n) or 0 is list is empty
 */

int sum_listint(listint_t *head)
{
unsigned int i, sum;

if (head == NULL)
return (0);
i = 0, sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
i++;
}
return (sum);
}
