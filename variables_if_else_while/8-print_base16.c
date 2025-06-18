#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abc;
	int def;

	for (abc = 0; abc <= 9; abc++)
	{
		putchar('0' + abc);
	}
	for (def = 'a'; def <= 'f'; def++)
	{
		putchar(def);
	}
	putchar('\n');
	return (0);
}
