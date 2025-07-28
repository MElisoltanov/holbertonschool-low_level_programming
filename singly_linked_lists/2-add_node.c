#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	
	/* Étape 1 : Allouer de la mémoire pour un nouveau nœud */
	list_t *new_node = malloc(sizeof(list_t));

    /* Étape 2 : Vérifier si malloc a échoué */
	if (new_node == NULL)
	{
		return (NULL);
	}

    /* Étape 3 : Dupliquer la chaîne str avec strdup */
	new_node->str = strdup(str);

    /* Étape 4 : Calculer la longueur de la chaîne (avec strlen) et la stocker */
	new_node->len = strlen(str);

    /* Étape 5 : Relier le nouveau nœud à l'ancien head */
	new_node->next = *head;

    /* Étape 6 : Mettre à jour head pour pointer vers le nouveau nœud */
	*head = new_node;

    /* Étape 7 : Retourner l'adresse du nouveau nœud */
	return (new_node);
}
