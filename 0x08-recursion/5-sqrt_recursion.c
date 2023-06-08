#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_checker(n, 1));
}

/**
 * sqrt_checker - checks for the squares of the next number
 * @n: integer passed in from the _sqrt_checker function
 * @i: integer that represents the next number
 * Return: integer
 */
int sqrt_checker(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_checker(n, i + 1));
}
