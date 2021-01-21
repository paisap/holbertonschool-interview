#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - prints all elements of a listint_t list
 * @head: pointer to head of list
 * Return: number of nodes
 */
int is_palindrome(listint_t **head)
{
	listint_t *aux, *aux1;
	int x = 1, t = 0, s = 0, ct = 0;

	aux1 = *head;
	aux = *head;

	if (*head == NULL)
		return (1);

	while (aux1->next != NULL)
		aux1 = aux1->next, x++;

	s = x / 2, s--;
	s++, x = x - 2;

	while (ct < s)
	{
		if (aux1->n != aux->n)
			return (0);

		aux1 = *head;

		for (t = 0; t < x; t++)
			aux1 = aux1->next;

		x--, ct++, aux = aux->next;
	}
	return (1);
}
