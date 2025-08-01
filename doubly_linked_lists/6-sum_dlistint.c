#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a dlistint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the n values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;

		head = head->next;
	}

	return (sum);
}
