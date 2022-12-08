#include "lists.h"

/**
* insert_dnodeint_at_index - Insert node at a given index
* @h: head of the linked list
* @idx: index of new node
* @n: value of the new node
* Return: address of the new node or null it fails
*/


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = new->prev = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (*new);
	}
	temp = *h;
	for (i = 0; i <= idx && temp != NULL; i++)
	{
		if (i == idx)
		{
			temp->prev->next = new;
			new->prev = temp->prev;
			temp->prev = new;
			new->next = temp;
			return (new);
		}
		temp = temp->next;
	}
	free(new);
	return (NULL);
}

