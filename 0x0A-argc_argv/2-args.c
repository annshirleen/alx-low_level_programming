#include <stdio.h>

/**
 * main - program that prints all arguments
 * @argc:argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
