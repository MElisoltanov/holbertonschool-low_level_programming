#include <stdio.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to convert
 *
 * Return: The converted integer, or 0 if no digits found
 */
int _atoi(char *s)

{
	int i = 0, sign = 1;
	unsigned int n = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			num = 1;
		}

		else if (num)
		{
			return (n * sign);
		}
		i++;
	}

	return (n * sign);
}
