#include "lists.h"
/**
 * sum_dlistint -  prints all the elements of a dlistint_t list.
 * @head: head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		sum += tem->n;
		temp = temp->next;
	}
	return (sum);
}
