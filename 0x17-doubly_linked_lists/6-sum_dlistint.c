#include "lists.h"

/**
 * sum_dlistint - returns sum of all data
 *
 * @head: head of list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int datasum;

	datasum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			datasum += head->n;
			head = head->next;
		}
	}
	return (datasum);

}
