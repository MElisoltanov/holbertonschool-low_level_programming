#include "main.h"

/**
 * _memset - Remplit la mémoire pointée par s avec la valeur b
 * @s: pointeur vers la zone mémoire à remplir
 * @b: valeur à copier
 * @n: nombre d'octets à remplir
 *
 * Return: pointeur vers s (début de la mémoire)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

}
