#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*free_listint2 - function that frees linked list
*and set the head to null
*@head: the head of the linked list
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = NULL;
		*head = next;
	}
}
