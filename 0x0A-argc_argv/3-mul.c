#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of multiplication
 * @argc: number of arguments
 * @argv: the arguments in form of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, num;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	num = a * b;

	printf("%d\n", num);
	return (0);
}
