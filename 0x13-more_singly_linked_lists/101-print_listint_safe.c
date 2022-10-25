#include "lists.h"
/**
*print_listint_safe - function to print linked list
*@head: head of the linked list
*Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *h, *next;

	h = malloc(sizeof(listint_t));
	if (head == NULL || h == NULL)
		exit(98);

	printf("[%p] %d\n", (void *)head, head->n);
	next = h = head->next;
	do {
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		if (h->next == NULL)
		{
			break;
		}
		free(next);
		next = h;
		i++;
	} while (h != NULL);
	return (i);
}

