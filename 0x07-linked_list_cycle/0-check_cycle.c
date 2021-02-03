#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* check_cycle - prints all elements of a listint_t list
* @list: pointer to head of list
* Return: 0 or 1
*/
int check_cycle(listint_t *list)
{
	listint_t *aux, *aux1;

	aux = list;
	aux1 = list->next;
	if (list == NULL)
		return (0);

	while (aux1->next && aux1->next->next)
	{
		if (aux1 == aux)
			return (1);
		aux = aux->next;
		aux1 = aux1->next->next;
	}
	return (0);
}
