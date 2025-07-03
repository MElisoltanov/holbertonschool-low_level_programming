#include "main.h"

/*
* 1 ----------> 0     // (n <= 1) → return (0);
* 1024 -------> 0     // (n % i == 0) → return (0); i = 2
* 16 ---------> 0     // (n % i == 0) → return (0); i = 2
* 17 ---------> 1     // (i * i > n) → return (1); aucun diviseur trouvé
* 25 ---------> 0     // (n % i == 0) → return (0); i = 5
* -1 ---------> 0     // (n <= 1) → return (0);
* 113 --------> 1     // (i * i > n) → return (1); aucun diviseur trouvé
* 7919 -------> 1     // (i * i > n) → return (1); aucun diviseur trouvé
*/

/**
 * is_prime_helper - Recursively checks for factors of n starting from i
 * @n: The number to check
 * @i: The current divisor to test
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	return (is_prime_helper(n, 2));
}
