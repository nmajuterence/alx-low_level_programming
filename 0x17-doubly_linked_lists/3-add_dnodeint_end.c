#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * of a doubly linked list
 *
 * @head: head  of list
 * @n: value of node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *h;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = h;
	return (newnode);
}
