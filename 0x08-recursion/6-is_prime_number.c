#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the
 *  input integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_checker(n, 2));
}

/**
 * is_prime_checker - loops through the numbers to check for prime
 * @n: integer to be passed
 * @i: integer used to loop through
 * Return: 1 or 0
 */

int is_prime_checker(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_checker(n, i + 1));
}
