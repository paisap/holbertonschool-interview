#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - prints all elements of a listint_t list
 * @head: pointer to head of list
 * @number: the number to insert
 * Return:  nodes insert
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *aux, *new;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	while (aux->next != NULL)
	{
		if (aux->n < number && aux->next->n > number)
		{
			new->next = aux->next;
			aux->next = new;
		}
		aux = aux->next;
	}
	return (new);
}
