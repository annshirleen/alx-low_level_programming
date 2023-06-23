#include "variadic_functions.h"

/**
 * sum_them_all - a function that returnms the sum of all
 * its parameters
 * @n: number of parameters being passed
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int sum, i = 0;

	va_start(param, n);

	if (n == 0)
		return (0);
	sum = 0;
	while (i < n)
	{
		sum += va_arg(param, int);
		i++;
	}
	va_end(param);
	return (sum);
}
