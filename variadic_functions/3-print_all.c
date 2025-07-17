#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);

/**
 * print_all - Prints anything based on a format string.
 * @format: List of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
    /* Étape 1 : Déclarer les variables nécessaires (va_list, index, etc.)*/
	va_list args;
	unsigned int i = 0;
	unsigned int j;
	char tab[] = {'c', 'i', 'f', 's', '\0'};
	void (*fun[])(va_list) = {print_c, print_i, print_f, print_s};
	char *separator = "";

    /* Étape 2 : Initialiser va_start avec le format*/
	va_start(args, format);

    /* Étape 3 : Parcourir chaque caractère de la chaîne 'format'*/
	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (tab[j] != '\0')
		{
			if (format[i] == tab[j])
			{
				/* Étape 5 : Afficher la valeur correspondante*/
				printf("%s", separator);
				fun[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}

/* Étape 4 : Selon le caractère, lire le bon type d'argument avec va_arg*/
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);

}

    /* Étape 6 : Gérer les séparateurs (sauf après le dernier affichage)*/
    /* Étape 7 : Terminer va_list avec va_end*/
    /* Étape 8 : Afficher un saut de ligne*/

