#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new nodevat a given position
 * @head: pointer
 * @idx: index
 * @n: data
 *
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL && idx != 0)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
