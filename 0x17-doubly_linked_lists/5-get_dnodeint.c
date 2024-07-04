#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 *
 * @head: pointer to head of list
 * @index: index of node search, initially 0.
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *tmp;

	s = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (tmp)
	{
		if (index == s)
			return (tmp);
			s++;
		tmp = tmp->next;
	}
	return (NULL);

}
