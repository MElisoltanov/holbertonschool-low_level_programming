#include "main.h"
/**
 * puts2 - Prints one character out of two from a string, starting with the first
 * @str: Pointer to the string to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
 int i = 0;
 
 for (i = 0; str[i] != '\0'; i++)
   {
    if (i % 2 == 0)
    _putchar(str[i]);
   }
   _putchar ('\n');
}