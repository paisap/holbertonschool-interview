#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int recursion(listint_t **node_i, listint_t *node_j);

/**
 * is_palindrome - prints all elements of a listint_t list
 * @head: pointer to head of list
 * Return: number of nodes
 */
int is_palindrome(listint_t **head)
{
	listint_t *head_copy = *head;

	if (head == NULL || *head == NULL)
		return (1);

	return (recursion(&head_copy, *head));
}

/**
 * recursion - function to compare two nodes
 *
 * @head: node to compare since the first node
 * @aux: node to compare since the last node
 *
 * Return: 1 if the nodes are equal. 0 if not.
 */
int recursion(listint_t **head, listint_t *aux)
{
	int prev_result;

	if (aux->next != NULL)
		prev_result = recursion(head, aux->next);
	else
		prev_result = 1;


	if (prev_result == 1 && (*head)->n == aux->n)
	{
		*head = (*head)->next;
		return (1);
	}
	else
		return (0);
}
