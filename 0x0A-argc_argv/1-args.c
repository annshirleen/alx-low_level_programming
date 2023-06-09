#include <stdio.h>

/**
 * main - program that prints the argument count
 * @argc: argumnt count
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
