#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int start;
	int end;
	int len = 0;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
	{

	}
	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
	}

}
