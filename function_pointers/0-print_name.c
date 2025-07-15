#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: Pointer to the name to print.
 * @f: Function pointer to a function that takes a char * as parameter.
 *
 * Description:
 * This function calls the function pointed to by @f
 * and passes @name as argument. If @name or @f is NULL,
 * the function does nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

		if (f != NULL)
		{
			f(name);
		}

}
