#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always à (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)

		putchar(alphabet);

	putchar('\n');
	return (0);
}
