#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money
 *@argc: number of arguments
 *@argv: strings
 *Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int num = 0, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (cents >= 25)
	{
		num += cents / 25;
		cents %= 25;
	}
	if (cents >= 10)
	{
		num += cents / 10;
		cents  %= 10;
	}
	if (cents >= 5)
	{
		num += cents / 5;
		cents %= 5;
	}
	if (cents >= 2)
	{
		num += cents / 2;
		cents %= 2;
	}
	num += cents;
	printf("%d\n", num);
	return (0);
}
