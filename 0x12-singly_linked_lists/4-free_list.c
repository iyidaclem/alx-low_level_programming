#include "lists.h"

/**
*free_list - function that frees a list
*@head: pointer the address of the head
*Return: void
*/

void free_list(list_t *head)
{
	list_t *t;

	while (head->next != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
	free(head);
}

