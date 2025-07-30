#include <stdlib.h>
#include <string.h>
#include "lists.h"

#include "lists.h"
/**
 * _strlen - Returns the length of a string
 * @str: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(const char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

		return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	new_node->len = _strlen(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new_node;

	return (new_node);
}
