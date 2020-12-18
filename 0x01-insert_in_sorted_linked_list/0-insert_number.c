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

	if (head == NULL)
	{
		return (NULL);
	}
	aux = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (aux->n > number)
	{
		new->next = aux;
		*head = new;
		return (new);
	}

	while (aux->next != NULL && aux->next->n < number)
		aux = aux->next;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
