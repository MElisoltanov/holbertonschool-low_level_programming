#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	new_node->len = _strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
