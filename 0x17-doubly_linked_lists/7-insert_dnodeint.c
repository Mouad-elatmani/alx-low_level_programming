#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int cnt = 0;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp)
	{
		if (cnt == (idx - 1))
		{
			new->prev = temp;
			new->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (NULL);
		}
		cnt++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
