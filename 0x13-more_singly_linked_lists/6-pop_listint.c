#include "lists.h"

/**
 * pop_listint - deletes the head node 
 * @head: pointer to the first node  in the listint_t
 *
 * Return: returns the head node’s data (n), or 0 if the listint_t is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
