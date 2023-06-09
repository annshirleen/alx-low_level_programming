#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of addition
 * @argc: number of arguments
 * @argv: arguments inform of strings
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) < 0) || (atoi(argv[i]) == 0 && argv[i] != 0))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
