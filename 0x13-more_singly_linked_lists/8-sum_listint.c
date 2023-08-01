#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: first node in listint_t
 *
 * Return: returns sum, if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
