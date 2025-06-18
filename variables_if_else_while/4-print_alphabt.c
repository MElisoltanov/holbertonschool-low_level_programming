#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always à (Success)
 */
int main(void)
{
	char ABC;

	for (ABC = 'a'; ABC <= 'z' ; ABC++)
	{
		if (ABC == 'q' || ABC == 'e')
		{
			continue;
		}

		putchar(ABC);
	}

		putchar('\n');
		return (0);
}
